import logging
import threading
import time
import os

def duerme():
    nthr=threading.get_native_id()
    logging.info("Proceso %s, thread %s",os.getpid(), nthr)
    logging.info("Thread %s (%s): comienza", os.getpid(),nthr)
    time.sleep(1200)
    logging.info("Thread %s (%s): termina", os.getpid(),nthr)

if __name__ == "__main__":
    format = "%(asctime)s: %(message)s"
    logging.basicConfig(format=format, level=logging.INFO,
                        datefmt="%H:%M:%S")

    logging.info("Main  %s : antes de crear thread", os.getpid())
    x = threading.Thread(target=duerme)
    logging.info("Main  %s : antes de lanzar thread",os.getpid())
    x.start()
    logging.info("Main    : espera finalizacion")
    x.join()
    logging.info("Main    : terminado")