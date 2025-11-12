
/* CommonValues() */

void MVCommon.dll::MV::Common::CommonValues::CommonValues__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__CommonValues);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MV__Common__CommonValues->static_fields->GameCoinBoostTime = 720000;
  return;
}


/* Single get_CompareThreshold() */

float MVCommon.dll::MV::Common::CommonValues::CommonValues_get_CompareThreshold(MethodInfo *method)

{
  return _UNK_?;
}

