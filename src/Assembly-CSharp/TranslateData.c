
/* TranslateData(MVWorldObjectClient, Single) */

void Assembly-CSharp.dll::TranslateData::TranslateData__ctor
               (TranslateData *this,MVWorldObjectClient *wo,float gridSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (wo != (MVWorldObjectClient *)0x0) {
    id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                         (this_00,(int32_t)id,(MethodInfo *)0x0);
      (this->fields).worldObjectClientRef = pWVar1;
      puVar2 = (undefined8 *)
               (*(code *)(wo->klass->vtable).get_WorldPosition_1.method)(&stack0xfffffff0);
      uVar3 = *puVar2;
      fVar4 = *(float *)(puVar2 + 1);
      (this->fields).ungridifiedPosition.x = (float)(int)uVar3;
      (this->fields).ungridifiedPosition.y = (float)(int)((ulonglong)uVar3 >> 0x20);
      (this->fields).ungridifiedPosition.z = fVar4;
      puVar2 = (undefined8 *)
               (*(code *)(wo->klass->vtable).GetClosestGridPoint.method)(&stack0xfffffff0,wo);
      uVar3 = *puVar2;
      fVar4 = *(float *)(puVar2 + 1);
      (this->fields).gridifiedPosition.x = (float)(int)uVar3;
      (this->fields).gridifiedPosition.y = (float)(int)((ulonglong)uVar3 >> 0x20);
      (this->fields).gridifiedPosition.z = fVar4;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
      fVar6 = pVVar5->y;
      fVar4 = pVVar5->z;
      (this->fields).localDirCamToObject.x = pVVar5->x;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjectClientRef;
  if (this_00 != (WorldObjectClientRef *)0x0) {
    pMVar1 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       ((WorldObjectClientRef_1_MVRoundCube_ *)this_00,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    return (MVWorldObjectClient *)pMVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar3;
}

