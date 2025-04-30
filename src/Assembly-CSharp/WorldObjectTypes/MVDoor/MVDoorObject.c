
/* Single GetCurrentValue(DoorType) */

float Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorObject::MVDoorObject_GetCurrentValue
                (MVDoorObject *this,DoorType__Enum doorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
  }
  bVar1 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_IsSliding
                    (doorType,(MethodInfo *)0x0);
  index = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_GetDoorAxis
                    (doorType,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pMVar2 = (this->fields).doorLogic;
    if (pMVar2 != (MVDoor *)0x0) {
      fVar3 = (pMVar2->fields).doorConfig.openValue;
      pTVar4 = (this->fields).animationRoot;
      fVar5 = (pMVar2->fields).doorConfig.closeValue;
      uVar6._0_4_ = (pMVar2->fields).doorConfig.toggleTime;
      uVar6._4_4_ = (pMVar2->fields).doorConfig.docType;
      if (pTVar4 != (Transform *)0x0) {
        pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                           ((Quaternion *)auStack_8,pTVar4,(MethodInfo *)0x0);
        fStack_9 = pQVar7->x;
        VStack_10.x = pQVar7->y;
        VStack_10.y = pQVar7->z;
        VStack_10.z = pQVar7->w;
        puVar11 = (undefined8 *)func_?(auStack_8 + 4,&fStack_9,0,fVar5,uVar6);
        VStack_10._0_8_ = *puVar11;
        VStack_10.z = *(float *)(puVar11 + 1);
        doorType = (DoorType__Enum)
                   UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_10,index,(MethodInfo *)0x0);
        if (((float)((uint)fVar3 & _UNK_?) + _UNK_? < (float)doorType) &&
           ((float)((uint)fVar5 & _UNK_?) + _UNK_? < (float)doorType)) {
          doorType = (DoorType__Enum)((float)doorType - _UNK_?);
        }
        return (float)doorType;
      }
    }
  }
  else {
    pTVar4 = (this->fields).animationRoot;
    if (pTVar4 != (Transform *)0x0) {
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)(auStack_8 + 4),pTVar4,(MethodInfo *)0x0);
      VStack_10.x = pVVar12->x;
      VStack_10.y = pVVar12->y;
      VStack_10.z = pVVar12->z;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                        (&VStack_10,index,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  fVar14 = (float10)(*pcVar13)();
  return (float)fVar14;
}


/* Void SetCurrentValue(Single, DoorType) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorObject::MVDoorObject_SetCurrentValue
               (MVDoorObject *this,float value,DoorType__Enum doorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
  }
  index = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_GetDoorAxis
                    (doorType,(MethodInfo *)0x0);
  bVar1 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_IsSliding
                    (doorType,(MethodInfo *)0x0);
  pTVar2 = (this->fields).animationRoot;
  if (bVar1 == 0) {
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                ((Quaternion *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
      puVar3 = (undefined8 *)func_?(&stack0xffffffe0);
      fVar4 = *(float *)(puVar3 + 1);
      fVar5 = (float)*puVar3;
      fVar6 = (float)((ulonglong)*puVar3 >> 0x20);
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                ((Vector3 *)&stack0xfffffff0,index,value,(MethodInfo *)0x0);
      pTVar2 = (this->fields).animationRoot;
      euler.y = fVar6 * _UNK_?;
      euler.x = fVar5 * _UNK_?;
      euler.z = fVar4 * _UNK_?;
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                         ((Quaternion *)&stack0xffffffdc,euler,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar2,*pQVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (pTVar2 != (Transform *)0x0) {
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
    fVar4 = pVVar8->x;
    fVar5 = pVVar8->y;
    fVar6 = pVVar8->z;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              ((Vector3 *)&stack0xfffffff0,index,value,(MethodInfo *)0x0);
    pTVar2 = (this->fields).animationRoot;
    if (pTVar2 != (Transform *)0x0) {
      value_00.y = fVar5;
      value_00.x = fVar4;
      value_00.z = fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar2,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void playOpenDoorSound(DoorType) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorObject::MVDoorObject_playOpenDoorSound
               (MVDoorObject *this,DoorType__Enum doorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_TrapDoor);
    func_?(&StringLiteral_Door);
    func_?(&StringLiteral_SlidingDoor);
    cRam_? = '\x01';
  }
  if (doorType == DoorType__Enum_Door) {
    pAVar1 = (this->fields).audioSource;
    if (pAVar1 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                (pAVar1,(this->fields).doorOpenSound,(MethodInfo *)0x0);
      pAVar2 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      pAVar1 = (this->fields).audioSource;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if ((pTVar3 != (Transform *)0x0) &&
         (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0),
         pAVar2 != (AudioManager *)0x0)) {
        AudioManager::AudioManager_Play_2
                  (pAVar2,StringLiteral_Door,pAVar1,*pVVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (doorType == DoorType__Enum_SlidingDoor) {
    pAVar1 = (this->fields).audioSource;
    if (pAVar1 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                (pAVar1,(this->fields).slidingDoorOpenSound,(MethodInfo *)0x0);
      pAVar2 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      pAVar1 = (this->fields).audioSource;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if ((pTVar3 != (Transform *)0x0) &&
         (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0),
         pAVar2 != (AudioManager *)0x0)) {
        AudioManager::AudioManager_Play_2
                  (pAVar2,StringLiteral_SlidingDoor,pAVar1,*pVVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (doorType != DoorType__Enum_TrapDoor) {
      return;
    }
    pAVar1 = (this->fields).audioSource;
    if (pAVar1 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                (pAVar1,(this->fields).trapDoorOpenSound,(MethodInfo *)0x0);
      pAVar2 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      pAVar1 = (this->fields).audioSource;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if ((pTVar3 != (Transform *)0x0) &&
         (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0),
         pAVar2 != (AudioManager *)0x0)) {
        AudioManager::AudioManager_Play_2
                  (pAVar2,StringLiteral_TrapDoor,pAVar1,*pVVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

