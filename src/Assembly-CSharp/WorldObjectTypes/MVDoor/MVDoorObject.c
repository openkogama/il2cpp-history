
/* Single GetCurrentValue(DoorType) */

float Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorObject::MVDoorObject_GetCurrentValue
                (MVDoorObject *this,DoorType__Enum doorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  EVar1 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_GetDoorAxis
                    (doorType,(MethodInfo *)0x0);
  if (doorType == DoorType__Enum_SlidingDoor) {
    pTVar2 = (this->fields).animationRoot;
    if (pTVar2 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_3.x = 0.0;
      QStack_3.y = 0.0;
      QStack_3._8_8_ = (ulonglong)(uint)QStack_3.w << 0x20;
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 != (void *)0x0) {
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          fVar7 = (float)(*pcVar5)();
          return fVar7;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,&QStack_3);
        if (EVar1 == Enums_Vector3Axis__Enum_X) {
          QStack_3.z = QStack_3.x;
        }
        else if (EVar1 == Enums_Vector3Axis__Enum_Y) {
          QStack_3.z = QStack_3.y;
        }
        else {
          if (EVar1 != Enums_Vector3Axis__Enum_Z) {
            uVar6 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            pIVar8 = (IndexOutOfRangeException *)func_?(uVar6);
            pSVar9 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                      (pIVar8,pSVar9,(MethodInfo *)0x0);
            uVar6 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
            FUN_?(pIVar8,uVar6);
            pcVar5 = (code *)swi(3);
            fVar7 = (float)(*pcVar5)();
            return fVar7;
          }
        }
        return QStack_3.z;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      fVar7 = (float)(*pcVar5)();
      return fVar7;
    }
  }
  else {
    pMVar10 = (this->fields).doorLogic;
    if (pMVar10 != (MVDoor *)0x0) {
      uStack_11._0_4_ = (pMVar10->fields).doorConfig.closeValue;
      uStack_11._4_4_ = (pMVar10->fields).doorConfig.toggleTime;
      uStack_12._0_4_ = (pMVar10->fields).doorConfig.docType;
      uStack_12._4_4_ = (pMVar10->fields).doorConfig.doorType;
      pTVar2 = (this->fields).animationRoot;
      fVar7 = (float)((uint)(pMVar10->fields).doorConfig.openValue & (uint)_UNK_?) +
               _UNK_?;
      fVar13 = (float)((uint)(pMVar10->fields).doorConfig.closeValue & (uint)_UNK_?) +
               _UNK_?;
      QStack_14._0_8_ = (pMVar10->fields).doorConfig.name;
      QStack_14.z._0_1_ = (pMVar10->fields).doorConfig.beginOpen;
      QStack_14.z._1_1_ = (pMVar10->fields).doorConfig.playersCanOpen;
      QStack_14.z._2_1_ = (pMVar10->fields).doorConfig.reverseOpenDirection;
      QStack_14.z._3_1_ = (pMVar10->fields).doorConfig.field_0xb;
      QStack_14.w = (pMVar10->fields).doorConfig.openValue;
      if (pTVar2 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        QStack_14.x = 0.0;
        QStack_14.y = 0.0;
        QStack_14.z = 0.0;
        QStack_14.w = 0.0;
        pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          fVar7 = (float)(*pcVar5)();
          return fVar7;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          fVar7 = (float)(*pcVar5)();
          return fVar7;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,&QStack_14);
        QStack_3.x = QStack_14.x;
        QStack_3.y = QStack_14.y;
        QStack_3.z = QStack_14.z;
        QStack_3.w = QStack_14.w;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                           ((Vector3 *)&QStack_14,&QStack_3,method);
        QStack_3.x = pVVar15->x;
        QStack_3.y = pVVar15->y;
        fVar16 = pVVar15->z;
        if (EVar1 == Enums_Vector3Axis__Enum_X) {
          fVar16 = QStack_3.x;
        }
        else if (EVar1 == Enums_Vector3Axis__Enum_Y) {
          fVar16 = QStack_3.y;
        }
        else if (EVar1 != Enums_Vector3Axis__Enum_Z) {
          uVar6 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          pIVar8 = (IndexOutOfRangeException *)func_?(uVar6);
          pSVar9 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                    (pIVar8,pSVar9,(MethodInfo *)0x0);
          uVar6 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
          FUN_?(pIVar8,uVar6);
          pcVar5 = (code *)swi(3);
          fVar7 = (float)(*pcVar5)();
          return fVar7;
        }
        if (fVar16 <= fVar7) {
          return fVar16;
        }
        if (fVar16 <= fVar13) {
          return fVar16;
        }
        return fVar16 - _UNK_?;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  fVar7 = (float)(*pcVar5)();
  return fVar7;
}


/* Void SetCurrentValue(Single, DoorType) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorObject::MVDoorObject_SetCurrentValue
               (MVDoorObject *this,float value,DoorType__Enum doorType,MethodInfo *method)

{
  method_00 = (MethodInfo *)CONCAT44(in_register_00000084,doorType);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  EVar1 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_GetDoorAxis
                    (doorType,(MethodInfo *)0x0);
  pTVar2 = (this->fields).animationRoot;
  if (doorType == DoorType__Enum_SlidingDoor) {
    if (pTVar2 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    QStack_6.x = 0.0;
    QStack_6.y = 0.0;
    if (EVar1 == Enums_Vector3Axis__Enum_X) {
      QStack_6.y = 0.0;
      QStack_6.x = value;
      value = 0.0;
    }
    else if (EVar1 == Enums_Vector3Axis__Enum_Y) {
      QStack_6._0_8_ = (ulonglong)(uint)value << 0x20;
      value = 0.0;
    }
    else if (EVar1 != Enums_Vector3Axis__Enum_Z) {
      uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar7 = (IndexOutOfRangeException *)func_?(uVar5);
      pSVar8 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (pIVar7,pSVar8,(MethodInfo *)0x0);
      uVar5 = func_?(&MethodInfo__UnityEngine__Vector3__set_Item_int__float_);
      FUN_?(pIVar7,uVar5);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar2 = (this->fields).animationRoot;
    if (pTVar2 == (Transform *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    QStack_6.z = value;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    pQVar9 = &QStack_6;
    pcVar4 = pcRam_?;
    goto code_?;
  }
  if (pTVar2 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aQStack_10[0].x = 0.0;
  aQStack_10[0].y = 0.0;
  aQStack_10[0].z = 0.0;
  aQStack_10[0].w = 0.0;
  pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar3,aQStack_10);
  QStack_6.x = aQStack_10[0].x;
  QStack_6.y = aQStack_10[0].y;
  QStack_6.z = aQStack_10[0].z;
  QStack_6.w = aQStack_10[0].w;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                     ((Vector3 *)aQStack_10,&QStack_6,method_00);
  fVar12 = pVVar11->x;
  uVar13 = pVVar11->y;
  fVar14 = pVVar11->z;
  fVar15 = value;
  if (EVar1 == Enums_Vector3Axis__Enum_X) {
code_?:
    fVar12 = fVar15;
    value = (float)uVar13;
  }
  else if (EVar1 != Enums_Vector3Axis__Enum_Y) {
    fVar15 = fVar12;
    fVar14 = value;
    if (EVar1 != Enums_Vector3Axis__Enum_Z) {
      uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar7 = (IndexOutOfRangeException *)func_?(uVar5);
      pSVar8 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (pIVar7,pSVar8,(MethodInfo *)0x0);
      uVar5 = func_?(&MethodInfo__UnityEngine__Vector3__set_Item_int__float_);
      FUN_?(pIVar7,uVar5);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    goto code_?;
  }
  pTVar2 = (this->fields).animationRoot;
  QStack_6.z = fVar14 * _UNK_?;
  QStack_6._0_8_ = CONCAT44(value * _UNK_?,fVar12 * _UNK_?);
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(&QStack_6);
  if (pTVar2 == (Transform *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aQStack_10[0].x = 0.0;
  aQStack_10[0].y = 0.0;
  aQStack_10[0].z = 0.0;
  aQStack_10[0].w = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  pQVar9 = aQStack_10;
  pcVar4 = pcRam_?;
code_?:
  (*pcVar4)(pvVar3,pQVar9);
  return;
}


/* Void playOpenDoorSound(DoorType) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoorObject::MVDoorObject_playOpenDoorSound
               (MVDoorObject *this,DoorType__Enum doorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_TrapDoor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Door);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SlidingDoor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (doorType == DoorType__Enum_Door) {
    pSVar1 = (this->fields).doorOpenSoundStream;
    if ((pSVar1 != (StreamedAudioClipManual *)0x0) &&
       (pAVar2 = (this->fields).audioSource, pAVar2 != (AudioSource *)0x0)) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                (pAVar2,(AudioResource *)(pSVar1->fields)._Clip_k__BackingField,(MethodInfo *)0x0);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      pAVar2 = (this->fields).audioSource;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_4.x = 0.0;
        VStack_4.y = 0.0;
        VStack_4.z = 0.0;
        pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar5,&VStack_4);
        if (this_00 != (AudioManager *)0x0) {
          VStack_8.x = VStack_4.x;
          VStack_8.y = VStack_4.y;
          VStack_8.z = VStack_4.z;
          name = StringLiteral_Door;
          goto code_?;
        }
      }
    }
  }
  else if (doorType == DoorType__Enum_SlidingDoor) {
    pSVar1 = (this->fields).slidingDoorOpenSoundStream;
    if ((pSVar1 != (StreamedAudioClipManual *)0x0) &&
       (pAVar2 = (this->fields).audioSource, pAVar2 != (AudioSource *)0x0)) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                (pAVar2,(AudioResource *)(pSVar1->fields)._Clip_k__BackingField,(MethodInfo *)0x0);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      pAVar2 = (this->fields).audioSource;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_4.x = 0.0;
        VStack_4.y = 0.0;
        VStack_4.z = 0.0;
        pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar5,&VStack_4);
        if (this_00 != (AudioManager *)0x0) {
          VStack_8.x = VStack_4.x;
          VStack_8.y = VStack_4.y;
          VStack_8.z = VStack_4.z;
          name = StringLiteral_SlidingDoor;
          goto code_?;
        }
      }
    }
  }
  else {
    if (doorType != DoorType__Enum_TrapDoor) {
      return;
    }
    pSVar1 = (this->fields).trapDoorOpenSoundStream;
    if ((pSVar1 != (StreamedAudioClipManual *)0x0) &&
       (pAVar2 = (this->fields).audioSource, pAVar2 != (AudioSource *)0x0)) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                (pAVar2,(AudioResource *)(pSVar1->fields)._Clip_k__BackingField,(MethodInfo *)0x0);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      pAVar2 = (this->fields).audioSource;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_4.x = 0.0;
        VStack_4.y = 0.0;
        VStack_4.z = 0.0;
        pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar5,&VStack_4);
        if (this_00 != (AudioManager *)0x0) {
          VStack_8.x = VStack_4.x;
          VStack_8.y = VStack_4.y;
          VStack_8.z = VStack_4.z;
          name = StringLiteral_TrapDoor;
code_?:
          VStack_4._0_8_ = VStack_8._0_8_;
          VStack_4.z = VStack_8.z;
          AudioManager::AudioManager_Play_2(this_00,name,pAVar2,&VStack_8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

