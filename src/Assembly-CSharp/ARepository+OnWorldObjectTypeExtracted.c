
/* IAsyncResult BeginInvoke(WorldObjectType, Dictionary`2[System.Object,System.Object],
   AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::ARepository+OnWorldObjectTypeExtracted::
ARepository_OnWorldObjectTypeExtracted_BeginInvoke
          (ARepository_OnWorldObjectTypeExtracted *this,WorldObjectType__Enum worldObjectType,
          Dictionary_2_System_Object_System_Object_ *woData,AsyncCallback *callback,Object *object,
          MethodInfo *method)

{
  aWStackX_10[0] = worldObjectType;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__MV__WorldObject__WorldObjectType,aWStackX_10);
  pDStack_3 = woData;
  pIVar4 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar4;
}

