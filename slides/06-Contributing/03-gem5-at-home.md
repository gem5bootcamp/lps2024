---
marp: true
paginate: true
theme: gem5
title: gem5 at home
author: William Shaddix
---

<!-- _class: title -->

## gem5 at home (or work/school)

---

## Getting help

gem5 has lots of resources to get help:

1. Documentation at [gem5 doxygen](http://doxygen.gem5.org/)

2. Ways to reachout for help:
   * [Github discussions](https://github.com/orgs/gem5/discussions)
   * [gem5 Slack channel](https://join.slack.com/t/gem5-workspace/shared_invite/zt-2e2nfln38-xsIkN1aRmofRlAHOIkZaEA)
   * Join our mailing lists:
      * [gem5-dev@gem5.org : For discussions regarding gem5 development](https://harmonylists.io/list/gem5-dev.gem5.org)
      * [gem5-users@gem5.org : For general discussions about gem5 and its use](https://harmonylists.io/list/gem5-users.gem5.org)
      * [gem5-announce@gem5.org : For general gem5 announcements](https://harmonylists.io/list/gem5-announce.gem5.org)

3. [Youtube videos](https://www.youtube.com/@gem5)


These links and more information are also avialable at [https://www.gem5.org/ask-a-question/](https://www.gem5.org/ask-a-question/)

---

## Running gem5 at home

* gem5 performance qualities
   * Single threaded
   * Consumes lots of RAM (if you want to model 32 GB of memory, it needs 32 GB of memory to model it)
   * Can take a lot of time

* Because of this its best to run multiple experiments in parallel

* Recommended hardware:
   * High single thread performance
   * Doesnt need many cores
   * LOTS OF RAM

<!-- ---

## Reccommended practices

* Unless planning on contributing to gem5 or you need to use recently developed work, use the ```stable``` branch.  -->
