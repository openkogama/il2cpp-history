
/* IAsyncResult BeginInvoke(WorldObjectType, Dictionary`2[System.Object,System.Object],
   AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::ARepository+OnWorldObjectTypeExtracted::
ARepository_OnWorldObjectTypeExtracted_BeginInvoke
          (ARepository_OnWorldObjectTypeExtracted *this,WorldObjectType__Enum worldObjectType,
          Dictionary_2_System_Object_System_Object_ *woData,AsyncCallback *callback,Object *object,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = func_?(TypeInfo__MV__WorldObject__WorldObjectType,&worldObjectType);
  pDStack_3 = woData;
  pIVar4 = (IAsyncResult *)func_?(this,&uStack_2,callback,object);
  return pIVar4;
}

