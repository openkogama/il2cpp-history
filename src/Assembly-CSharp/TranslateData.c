
/* TranslateData(MVWorldObjectClient, Single) */

void Assembly-CSharp.dll::TranslateData::TranslateData__ctor
               (TranslateData *this,MVWorldObjectClient *wo,float gridSize,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((wo != (MVWorldObjectClient *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                       (this_00,(wo->fields)._.id,(MethodInfo *)0x0);
    (this->fields).worldObjectClientRef = pWVar1;
    func_?(&this->fields);
    puVar2 = (undefined8 *)
             (*(wo->klass->vtable).get_WorldPosition_1.methodPtr)
                       (&stack0xfffffff0,wo,(wo->klass->vtable).get_WorldPosition_1.method);
    uVar3 = *puVar2;
    fVar4 = *(float *)(puVar2 + 1);
    (this->fields).ungridifiedPosition.x = (float)(int)uVar3;
    (this->fields).ungridifiedPosition.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    (this->fields).ungridifiedPosition.z = fVar4;
    puVar2 = (undefined8 *)
             (*(wo->klass->vtable).GetClosestGridPoint.methodPtr)(&stack0xfffffff0,wo,gridSize);
    uVar3 = *puVar2;
    fVar4 = *(float *)(puVar2 + 1);
    (this->fields).gridifiedPosition.x = (float)(int)uVar3;
    (this->fields).gridifiedPosition.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    (this->fields).gridifiedPosition.z = fVar4;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar5->zeroVector).y;
    fVar4 = (pVVar5->zeroVector).z;
    (this->fields).localDirCamToObject.x = (pVVar5->zeroVector).x;
    (this->fields).localDirCamToObject.y = fVar6;
    fVar6 = (this->fields).gridifiedPosition.x;
    fVar7 = (this->fields).gridifiedPosition.y;
    (this->fields).localDirCamToObject.z = fVar4;
    fVar4 = (this->fields).gridifiedPosition.z;
    (this->fields).prevGridifiedPosition.x = fVar6;
    (this->fields).prevGridifiedPosition.y = fVar7;
    (this->fields).prevGridifiedPosition.z = fVar4;
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVWorldObjectClient get_Wo() */

MVWorldObjectClient *
Assembly-CSharp.dll::TranslateData::TranslateData_get_Wo(TranslateData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjectClientRef;
  if (this_00 != (WorldObjectClientRef *)0x0) {
    pMVar1 = (MVWorldObjectClient *)
             WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)this_00,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    return pMVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar1;
}

