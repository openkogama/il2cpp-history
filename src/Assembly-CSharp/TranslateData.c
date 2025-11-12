
/* TranslateData(MVWorldObjectClient, Single) */

void Assembly-CSharp.dll::TranslateData::TranslateData__ctor
               (TranslateData *this,MVWorldObjectClient *wo,float gridSize,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((wo != (MVWorldObjectClient *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                       (this_00,(wo->fields)._.id,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).worldObjectClientRef = pWVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    puVar7 = (undefined8 *)
              (*(wo->klass->vtable).get_WorldPosition_1.methodPtr)
                        (&uStack_8,wo,(wo->klass->vtable).get_WorldPosition_1.method);
    fStack_9 = *(float *)(puVar7 + 1);
    uStack_8 = *puVar7;
    (this->fields).ungridifiedPosition.x = (float)(int)uStack_8;
    (this->fields).ungridifiedPosition.y = (float)(int)((ulonglong)uStack_8 >> 0x20);
    (this->fields).ungridifiedPosition.z = fStack_9;
    puVar7 = (undefined8 *)
              (*(wo->klass->vtable).GetClosestGridPoint.methodPtr)
                        (auStack_10,wo,gridSize,&uStack_8,
                         (wo->klass->vtable).GetClosestGridPoint.method);
    bVar2 = cRam_? == '\0';
    uVar11 = *puVar7;
    fVar12 = *(float *)(puVar7 + 1);
    (this->fields).gridifiedPosition.x = (float)(int)uVar11;
    (this->fields).gridifiedPosition.y = (float)(int)((ulonglong)uVar11 >> 0x20);
    (this->fields).gridifiedPosition.z = fVar12;
    if (bVar2) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar14 = (pVVar13->zeroVector).y;
    fVar12 = (pVVar13->zeroVector).z;
    (this->fields).localDirCamToObject.x = (pVVar13->zeroVector).x;
    (this->fields).localDirCamToObject.y = fVar14;
    fVar14 = (this->fields).gridifiedPosition.x;
    fVar15 = (this->fields).gridifiedPosition.y;
    (this->fields).localDirCamToObject.z = fVar12;
    fVar12 = (this->fields).gridifiedPosition.z;
    (this->fields).prevGridifiedPosition.x = fVar14;
    (this->fields).prevGridifiedPosition.y = fVar15;
    (this->fields).prevGridifiedPosition.z = fVar12;
    return;
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* MVWorldObjectClient get_Wo() */

MVWorldObjectClient *
Assembly-CSharp.dll::TranslateData::TranslateData_get_Wo(TranslateData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).worldObjectClientRef;
  if ((pWVar2 == (WorldObjectClientRef *)0x0) ||
     (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar3 == (MVWorldObjectClientManager *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
    return pMVar5;
  }
  key = (pWVar2->fields)._.woId;
  pMVar1 = pMVar1->klass->rgctx_data[1].method;
  if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar1);
    }
  }
  this_00 = (pMVar3->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)&stack0x00000008,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if ((*(byte *)((longlong)((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy + 0x135) & 1) == 0)
    {
      FUN_?(((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy);
    }
    return (MVWorldObjectClient *)0x0;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar5;
}

