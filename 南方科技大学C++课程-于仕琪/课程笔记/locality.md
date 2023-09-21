* Locality: Memory access is not random in most case

* Sofeware Locality:
    * Temporal locality:the same location will be referenced again in the future
    * Spatial locality: nearby memory location will be referenced in the future

* Hardware Locality with cache:
    * Keep referenced data in Cache(知道某个数据最近要使用，暂时把它保留在cache中)---->Temporal Locality
    * Cache line and Prefetch the near Cache line(提前把附近的数据装载进来)---->Spatial Locality


* Good Locality in Program---->Good Cache hit rate---->Good performance



* Temporal locality
    * Reuse the data(usually compiler will take care of it)

* Spatial Locality 
    * Access the near location data

