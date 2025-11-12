
/* Void Awake() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_Awake
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).unoccupiedTime = fVar3;
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_FixedUpdate
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  this_00 = (this->fields).wheel;
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = (obj->fields)._._.m_CachedPtr;
  if (pvVar1 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar1);
  uVar4 = (this->fields).prevPosition.x;
  uVar5 = (this->fields).prevPosition.y;
  fVar6 = (this->fields).prevPosition.z;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar7 = (float)(*pcRam_?)();
  (this->fields).velocity.x = (0.0 - (float)uVar4) / fVar7;
  (this->fields).velocity.y = (0.0 - (float)uVar5) / fVar7;
  (this->fields).velocity.z = (0.0 - fVar6) / fVar7;
  uVar3 = FUN_?(&(this->fields).velocity);
  uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
  (this->fields).velocity.y = 0.0;
  (this->fields).prevPosition.x = 0.0;
  (this->fields).prevPosition.y = 0.0;
  (this->fields).prevPosition.z = 0.0;
  fVar9 = (float)FUN_?(&(this->fields).velocity);
  fVar7 = _UNK_?;
  fVar6 = _UNK_?;
  if ((_UNK_? < fVar9) || (fVar9 < _UNK_?)) {
    pAVar10 = (this->fields).audioSourceRolling;
    if (pAVar10 == (AudioSource *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (pAVar10->fields)._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar10,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    cVar11 = (*pcRam_?)(pvVar1);
    if (cVar11 == '\0') {
      pAVar10 = (this->fields).audioSourceRolling;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar10,_UNK_?,(MethodInfo *)0x0);
      pAVar10 = (this->fields).audioSourceRolling;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar10,(MethodInfo *)0x0);
    }
  }
  if ((fVar9 <= fVar6) && (fVar7 <= fVar9)) {
    pAVar10 = (this->fields).audioSourceRolling;
    if (pAVar10 == (AudioSource *)0x0) goto code_?;
    bVar12 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar10,(MethodInfo *)0x0);
    if (bVar12 != 0) {
      pAVar10 = (this->fields).audioSourceRolling;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar10,0.0,(MethodInfo *)0x0);
      pAVar10 = (this->fields).audioSourceRolling;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (pAVar10,(MethodInfo *)0x0);
    }
  }
  value = fVar9 / _UNK_?;
  pAVar10 = (this->fields).audioSourceRolling;
  fVar13 = _UNK_?;
  if ((value < _UNK_?) || (fVar13 = _UNK_?, _UNK_? < value)) {
    value = fVar13;
  }
  if (pAVar10 == (AudioSource *)0x0) goto code_?;
  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
            (pAVar10,value,(MethodInfo *)0x0);
  if ((fVar6 < fVar9) || (fVar9 < fVar7)) {
    pAVar10 = (this->fields).audioSourceWind;
    if (pAVar10 == (AudioSource *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (pAVar10->fields)._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar10,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    cVar11 = (*pcRam_?)(pvVar1);
    if (cVar11 == '\0') {
      pAVar10 = (this->fields).audioSourceWind;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar10,_UNK_?,(MethodInfo *)0x0);
      pAVar10 = (this->fields).audioSourceWind;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar10,(MethodInfo *)0x0);
    }
  }
  if ((fVar9 <= fVar6) && (fVar7 <= fVar9)) {
    pAVar10 = (this->fields).audioSourceWind;
    if (pAVar10 == (AudioSource *)0x0) goto code_?;
    bVar12 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar10,(MethodInfo *)0x0);
    if (bVar12 != 0) {
      pAVar10 = (this->fields).audioSourceWind;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar10,0.0,(MethodInfo *)0x0);
      pAVar10 = (this->fields).audioSourceWind;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (pAVar10,(MethodInfo *)0x0);
    }
  }
  fVar7 = (float)uVar3 / _UNK_?;
  pAVar10 = (this->fields).audioSourceWind;
  fVar6 = _UNK_?;
  if ((fVar7 < _UNK_?) || (fVar6 = _UNK_?, _UNK_? < fVar7)) {
    uVar8 = 0;
    fVar7 = fVar6;
  }
  if (pAVar10 != (AudioSource *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pAVar10 == (AudioSource *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowArgumentNullException((Object *)0x0,StringLiteral_source,(MethodInfo *)0x0)
      ;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = (pAVar10->fields)._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowArgumentNullException
                ((Object *)pAVar10,StringLiteral_source,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar1,CONCAT44(uVar8,fVar7));
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleUnoccupiedVehicle() */

void Assembly-CSharp.dll::HamsterWheelVisualization::
     HamsterWheelVisualization_HandleUnoccupiedVehicle
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  if ((this->fields).vehicleIsUnoccupied == 0) {
    pVVar1 = (this->fields).vehicleSeatManager;
    if (pVVar1 == (VehicleSeatManager *)0x0) goto code_?;
    if ((pVVar1->fields).occupiedSeatCount == 0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar4 = (float)(*pcRam_?)();
      (this->fields).unoccupiedTime = fVar4;
      (this->fields).vehicleIsUnoccupied = 1;
    }
  }
  if ((this->fields).vehicleIsUnoccupied != 0) {
    pVVar1 = (this->fields).vehicleSeatManager;
    if (pVVar1 == (VehicleSeatManager *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (0 < (pVVar1->fields).occupiedSeatCount) {
      (this->fields).vehicleIsUnoccupied = 0;
    }
    if ((this->fields).vehicleIsUnoccupied != 0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar4 = (float)(*pcRam_?)();
      uVar5 = _UNK_?;
      if (_UNK_? - (fVar4 - (this->fields).unoccupiedTime) <
          (this->fields).vehicleAboutToBeRemovedTime) {
        pVVar6 = (this->fields).vehicleBlinker;
        if (pVVar6 != (VehicleBlinker *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                          ,5,_UNK_?,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (pVVar6->fields)._.blinkers;
          if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
             (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,
                                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                                 ), pOVar7 != (Object *)0x0)) {
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            uVar8 = (*pcRam_?)();
            *(undefined4 *)((longlong)&pOVar7[1].monitor + 4) = uVar5;
            *(undefined4 *)&pOVar7[1].monitor = uVar8;
            return;
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto code_?;
      }
    }
  }
  return;
}


/* Void Init(VehicleSeatManager, Single, MVRuntimeDataVariableClampedFloat, MVRuntimeDataVariable,
   MVRuntimeDataVariable, MVRuntimeDataVariable, Boolean) */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_Init
               (HamsterWheelVisualization *this,VehicleSeatManager *vehicleSeatManager,
               float fullHealth,MVRuntimeDataVariableClampedFloat *health,
               MVRuntimeDataVariable *isMovingForward,MVRuntimeDataVariable *isMovingBackwards,
               MVRuntimeDataVariable *isGrounded,bool isInSpawner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AvatarBlobShadowController_MethodInfo__UnityEngine__Component__GetComponentInChildren<AvatarBlobShadowController>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamsterWheelVisualization__OnSeatOccupiedChange__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamsterWheelVisualization___Init_b__16_0_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamsterWheelVisualization___Init_b__16_1_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._.isInSpawner = isInSpawner;
  (this->fields).vehicleSeatManager = vehicleSeatManager;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).vehicleSeatManager >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (vehicleSeatManager != (VehicleSeatManager *)0x0) {
    pVVar6 = (vehicleSeatManager->fields).OnSeatOccupiedChange;
    b = (Delegate *)FUN_?(TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate);
    pMVar7 = MethodInfo__HamsterWheelVisualization__OnSeatOccupiedChange__;
    bVar1 = iRam_? != 0;
    (b->fields).method_ptr =
         MethodInfo__HamsterWheelVisualization__OnSeatOccupiedChange__->virtualMethodPointer;
    (b->fields).method = pMVar7;
    (b->fields).m_target = (Object *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    uVar8 = pMVar7->parameters_count;
    (b->fields).method_code = b;
    if (((pMVar7->flags & 0x10) == 0) || (uVar8 != 0)) {
      (b->fields).method_code = (b->fields).m_target;
      puVar9 = (b->fields).method_ptr;
    }
    else {
      puVar9 = &UNK_?;
    }
    (b->fields).invoke_impl = puVar9;
    (b->fields).extra_arg = FUN_?;
    pVVar10 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pVVar6,b,(MethodInfo *)0x0);
    pVVar6 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
    if (pVVar10 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
      (vehicleSeatManager->fields).OnSeatOccupiedChange =
           (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
    }
    else {
      pVVar11 = pVVar6;
      if (pVVar10->klass == TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate) {
        pVVar11 = pVVar10;
      }
      if (pVVar11 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      (vehicleSeatManager->fields).OnSeatOccupiedChange = pVVar11;
      pVVar11 = pVVar6;
      if (pVVar10->klass == TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate) {
        pVVar11 = pVVar10;
      }
      if (pVVar11 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(vehicleSeatManager->fields).OnSeatOccupiedChange >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (health != (MVRuntimeDataVariableClampedFloat *)0x0) {
      fVar13 = (float)(*(health->klass->vtable).get_Value.methodPtr)
                                (health,(health->klass->vtable).get_Value.method);
      (this->fields).curHealth = fVar13;
      pMVar14 = (health->fields)._._.OnChange;
      pUVar15 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar15,(Object *)this,
                 MethodInfo__HamsterWheelVisualization___Init_b__16_0_System__Object_,
                 (MethodInfo *)0x0);
      pVVar10 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar14,(Delegate *)pUVar15,(MethodInfo *)0x0);
      if (pVVar10 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
        (health->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      }
      else {
        pVVar11 = pVVar6;
        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pVVar10->klass ==
            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pVVar11 = pVVar10;
        }
        if (pVVar11 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        (health->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pVVar11;
        pVVar11 = pVVar6;
        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pVVar10->klass ==
            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pVVar11 = pVVar10;
        }
        if (pVVar11 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(health->fields)._._.OnChange >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      if (isGrounded != (MVRuntimeDataVariable *)0x0) {
        pMVar14 = (isGrounded->fields).OnChange;
        pUVar15 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (pUVar15,(Object *)this,
                   MethodInfo__HamsterWheelVisualization___Init_b__16_1_System__Object_,
                   (MethodInfo *)0x0);
        pVVar10 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar14,(Delegate *)pUVar15,(MethodInfo *)0x0);
        if (pVVar10 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
          (isGrounded->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        }
        else {
          pVVar11 = pVVar6;
          if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pVVar10->klass ==
              TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pVVar11 = pVVar10;
          }
          if (pVVar11 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
            FUN_?(pVVar10);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (isGrounded->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pVVar11;
          if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pVVar10->klass ==
              TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pVVar6 = pVVar10;
          }
          if (pVVar6 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
            FUN_?(pVVar10);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(isGrounded->fields).OnChange >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pTVar16 = (this->fields).hamsterWheelVisualizationRoot;
        pVVar17 = (this->fields).vehicleBlinker;
        if ((pTVar16 != (Transform *)0x0) &&
           (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar16,(MethodInfo *)0x0),
           pMVar7 = 
           UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
           , pGVar18 != (GameObject *)0x0)) {
          if ((
              UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(
                         UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                         );
          }
          pMVar19 = (MeshFilter__Array *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren_4
                              (pGVar18,0,((pMVar7->field7_0x38).rgctx_data)->method);
          if (pVVar17 != (VehicleBlinker *)0x0) {
            bVar1 = iRam_? != 0;
            (pVVar17->fields)._.meshFilters = pMVar19;
            if (bVar1) {
              uVar2 = (uint)((ulonglong)&(pVVar17->fields)._.meshFilters >> 0xc);
              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                LOCK();
                bVar1 = uVar4 == *puVar5;
                if (bVar1) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar1);
            }
            pVVar17 = (this->fields).vehicleBlinker;
            if (pVVar17 != (VehicleBlinker *)0x0) {
              (pVVar17->fields)._.visible = 1;
              if (isInSpawner != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)this,0,(MethodInfo *)0x0);
              }
              pTVar16 = (this->fields).hamsterWheelVisualizationRoot;
              if (pTVar16 != (Transform *)0x0) {
                pAVar20 = (AvatarBlobShadowController *)
                          UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_GetComponentInChildren_1
                                    ((Component *)pTVar16,
                                     AvatarBlobShadowController_MethodInfo__UnityEngine__Component__GetComponentInChildren<AvatarBlobShadowController>__
                                    );
                bVar1 = iRam_? != 0;
                (this->fields).blobShadow = pAVar20;
                if (bVar1) {
                  uVar2 = (uint)((ulonglong)&(this->fields).blobShadow >> 0xc);
                  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                    LOCK();
                    bVar1 = uVar4 == *puVar5;
                    if (bVar1) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar1);
                }
                pAVar20 = (this->fields).blobShadow;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (pAVar20 != (AvatarBlobShadowController *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if ((pAVar20->fields)._._._._.m_CachedPtr != (void *)0x0) {
                    pAVar20 = (this->fields).blobShadow;
                    if (pAVar20 == (AvatarBlobShadowController *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pAVar20,0,(MethodInfo *)0x0);
                  }
                }
                pGVar18 = (this->fields).wheel;
                if ((pGVar18 != (GameObject *)0x0) &&
                   (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar18,(MethodInfo *)0x0),
                   pTVar16 != (Transform *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_21 = 0;
                  fStack_22 = 0.0;
                  pvVar23 = (pTVar16->fields)._._.m_CachedPtr;
                  if (pvVar23 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pcVar12 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                    uVar24 = func_?(&UNK_?);
                    FUN_?(uVar24,0);
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pcRam_? = pcVar12;
                  (*pcRam_?)(pvVar23,&uStack_21);
                  (this->fields).prevPosition.x = (float)(undefined4)uStack_21;
                  (this->fields).prevPosition.y = (float)uStack_21._4_4_;
                  (this->fields).prevPosition.z = fStack_22;
                  (this->fields)._.cullDistance = 100.0;
                  (this->fields)._.disableVisualizationDistance = 100.0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_OnDisable
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).vehicleBlinker;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pVVar1 != (VehicleBlinker *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pVVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pVVar1 = (this->fields).vehicleBlinker;
      if (pVVar1 == (VehicleBlinker *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pVVar1,0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_OnEnable
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  obj = (this->fields).vehicleBlinker;
  if (obj == (VehicleBlinker *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (VehicleBlinker *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void OnGroundedChange(Boolean) */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_OnGroundedChange
               (HamsterWheelVisualization *this,bool val,MethodInfo *method)

{
  obj = (this->fields).audioSourceRolling;
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = _UNK_?;
  if (val == 0) {
    uVar2 = 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                  ,CONCAT71(in_register_00000011,val),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar3 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,uVar2);
  return;
}


/* Void OnHealthChange(Single) */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_OnHealthChange
               (HamsterWheelVisualization *this,float newHealth,MethodInfo *method)

{
  fVar1 = (this->fields).curHealth;
  if (newHealth < fVar1) {
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    type = BlinkType__Enum_Damage;
  }
  else {
    if (newHealth <= fVar1) goto code_?;
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    type = BlinkType__Enum_Healing;
  }
  BlinkerBase::BlinkerBase_StartBlinking
            ((BlinkerBase *)this_00,type,_UNK_?,(MethodInfo *)0x0);
code_?:
  (this->fields).curHealth = newHealth;
  return;
}


/* Void OnSeatOccupiedChange() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_OnSeatOccupiedChange
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).vehicleSeatManager;
  if (pVVar1 == (VehicleSeatManager *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pVVar1->fields).occupiedSeatCount == 0) {
    pAVar3 = (this->fields).blobShadow;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pAVar3 != (AvatarBlobShadowController *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pAVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pAVar3 = (this->fields).blobShadow;
        if (pAVar3 != (AvatarBlobShadowController *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pAVar3,0,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  pAVar3 = (this->fields).blobShadow;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pAVar3 != (AvatarBlobShadowController *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar3 = (this->fields).blobShadow;
      if (pAVar3 != (AvatarBlobShadowController *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pAVar3 == (AvatarBlobShadowController *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar4 = (pAVar3->fields)._._._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar3,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,1);
        return;
      }
      goto code_?;
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_Update
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_timeStamp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Walk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_state);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.isInSpawner == 0) {
    if ((this->fields).vehicleIsUnoccupied == 0) {
      pVVar1 = (this->fields).vehicleSeatManager;
      if (pVVar1 == (VehicleSeatManager *)0x0) goto code_?;
      if ((pVVar1->fields).occupiedSeatCount == 0) {
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar4 = (float)(*pcRam_?)();
        (this->fields).unoccupiedTime = fVar4;
        (this->fields).vehicleIsUnoccupied = 1;
      }
      if ((this->fields).vehicleIsUnoccupied == 0) goto code_?;
    }
    pVVar1 = (this->fields).vehicleSeatManager;
    if (pVVar1 == (VehicleSeatManager *)0x0) goto code_?;
    if (0 < (pVVar1->fields).occupiedSeatCount) {
      (this->fields).vehicleIsUnoccupied = 0;
    }
    if ((this->fields).vehicleIsUnoccupied != 0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar4 = (float)(*pcRam_?)();
      if (_UNK_? - (fVar4 - (this->fields).unoccupiedTime) <
          (this->fields).vehicleAboutToBeRemovedTime) {
        this_00 = (this->fields).vehicleBlinker;
        if (this_00 == (VehicleBlinker *)0x0) goto code_?;
        in_R9 = 0;
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,_UNK_?,
                   (MethodInfo *)0x0);
      }
    }
  }
code_?:
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                      (aVStack_6,&(this->fields).velocity,in_R8);
  VStack_7.x = pVVar5->x;
  VStack_7.y = pVVar5->y;
  fVar4 = pVVar5->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  aVStack_6[0].x = (pVVar8->upVector).x;
  aVStack_6[0].y = (pVVar8->upVector).y;
  fVar9 = VStack_7.y * (pVVar8->upVector).z;
  fVar10 = fVar4 * aVStack_6[0].y;
  fVar4 = fVar4 * aVStack_6[0].x;
  fVar11 = VStack_7.x * (pVVar8->upVector).z;
  fVar12 = VStack_7.x * aVStack_6[0].y - VStack_7.y * aVStack_6[0].x;
  uVar13 = FUN_?();
  if ((this->fields).vehicleIsUnoccupied == 0) {
    pVVar1 = (this->fields).vehicleSeatManager;
    fVar14 = (this->fields).velocity.x;
    fVar15 = (this->fields).velocity.z;
    if ((pVVar1 == (VehicleSeatManager *)0x0) ||
       (pLVar16 = (pVVar1->fields).seats, pLVar16 == (List_1_VehicleSeatBase_ *)0x0))
    goto code_?;
    if ((pLVar16->fields)._size == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar17 = (pLVar16->fields)._items;
    if (pVVar17 == (VehicleSeatBase__Array *)0x0) goto code_?;
    if ((int)pVVar17->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pVVar17->vector[0] == (VehicleSeatBase *)0x0) goto code_?;
    pMVar18 = (pVVar17->vector[0]->fields).owner;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar19 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar19 == (MVGameControllerBase *)0x0) ||
       (this_01 = (pMVar19->fields).game, this_01 == (MVNetworkGame *)0x0))
    goto code_?;
    iVar20 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
    if (_UNK_? < fVar14 * fVar14 + 0.0 + fVar15 * fVar15) {
      if ((pMVar18 == (MVAvatar *)0x0) || (pMVar21 = (pMVar18->fields).body, pMVar21 == (MVBody *)0x0))
      goto code_?;
      pTVar22 = (pMVar21->fields)._._._.transform;
      VStack_7._0_8_ = ZEXT48((uint)fVar14);
      VStack_7.z = fVar15;
      fVar23 = (float)FUN_?(&VStack_7);
      if (_UNK_? < fVar23) {
        fVar15 = fVar15 / fVar23;
        VStack_7.y = 0.0 / fVar23;
        VStack_7.x = fVar14 / fVar23;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_7.x = (pVVar8->zeroVector).x;
        VStack_7.y = (pVVar8->zeroVector).y;
        fVar15 = (pVVar8->zeroVector).z;
      }
      if (pTVar22 == (Transform *)0x0) goto code_?;
      VStack_7.z = fVar15;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                (pTVar22,&VStack_7,(MethodInfo *)0x0);
      if ((this->fields).speedState == 0) {
        pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (pDVar24,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (pDVar24 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) goto code_?;
        uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar24,
                   (Object *)StringLiteral_state,(Object *)StringLiteral_Walk,
                   (InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        aiStackX_8[0] = iVar20;
        pOVar25 = (Object *)FUN_?(uRam_?,aiStackX_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar24,
                   (Object *)StringLiteral_timeStamp,pOVar25,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pMVar26 = (pMVar18->fields).Animation;
        if (pMVar26 == (MVRuntimeDataVariable *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  (pMVar26,(Object *)pDVar24,(MethodInfo *)0x0);
        (this->fields).speedState = 1;
      }
    }
    else if ((this->fields).speedState != 0) {
      pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar24,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (pDVar24 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) goto code_?;
      uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar24,(Object *)StringLiteral_state,
                 (Object *)StringLiteral_Idle,(InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      aiStackX_8[0] = iVar20;
      pOVar25 = (Object *)FUN_?(uRam_?,aiStackX_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar24,
                 (Object *)StringLiteral_timeStamp,pOVar25,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if ((pMVar18 == (MVAvatar *)0x0) ||
         (pMVar26 = (pMVar18->fields).Animation, pMVar26 == (MVRuntimeDataVariable *)0x0))
      goto code_?;
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                (pMVar26,(Object *)pDVar24,(MethodInfo *)0x0);
      (this->fields).speedState = 0;
    }
  }
  this_02 = (this->fields).wheel;
  if (this_02 != (GameObject *)0x0) {
    pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_02,(MethodInfo *)0x0);
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar14 = (float)(*pcRam_?)();
    if (pTVar22 != (Transform *)0x0) {
      VStack_7.y = fVar4 - fVar11;
      VStack_7.x = fVar9 - fVar10;
      fVar4 = (float)(uVar13 ^ _UNK_?) * fVar14 * _UNK_? * _UNK_?;
      VStack_7.z = fVar12;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar27 = (pTVar22->fields)._._.m_CachedPtr;
      if (pvVar27 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar22,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar27,&VStack_7,fVar4);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <Init>b__16_0(Object) */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization__Init_b__16_0
               (HamsterWheelVisualization *this,Object *healthVal,MethodInfo *method)

{
  pHVar1 = this;
  if (healthVal == (Object *)0x0) {
code_?:
    FUN_?(pHVar1,lRam_?,method);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  method = (MethodInfo *)healthVal->klass;
  if ((((Object__Class *)method)->_0).element_class !=
      *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(healthVal);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = *(float *)&healthVal[1].klass;
  fVar4 = (this->fields).curHealth;
  if (fVar3 < fVar4) {
    this_00 = (this->fields).vehicleBlinker;
    pHVar1 = (HamsterWheelVisualization *)0x0;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    type = BlinkType__Enum_Damage;
  }
  else {
    if (fVar3 <= fVar4) goto code_?;
    this_00 = (this->fields).vehicleBlinker;
    pHVar1 = (HamsterWheelVisualization *)0x0;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    type = BlinkType__Enum_Healing;
  }
  BlinkerBase::BlinkerBase_StartBlinking
            ((BlinkerBase *)this_00,type,_UNK_?,(MethodInfo *)0x0);
code_?:
  (this->fields).curHealth = fVar3;
  return;
}


/* Void <Init>b__16_1(Object) */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization__Init_b__16_1
               (HamsterWheelVisualization *this,Object *val,MethodInfo *method)

{
  if (val != (Object *)0x0) {
    method = (MethodInfo *)val->klass;
    if ((((Object__Class *)method)->_0).element_class !=
        *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(val);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    obj = (this->fields).audioSourceRolling;
    this = (HamsterWheelVisualization *)0x0;
    if (obj != (AudioSource *)0x0) {
      uVar2 = _UNK_?;
      if (*(char *)&val[1].klass == '\0') {
        uVar2 = 0;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (AudioSource *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar3 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,uVar2);
      return;
    }
  }
  FUN_?(this,lRam_?,method);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* HamsterWheelVisualization() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization__ctor
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  (this->fields).vehicleAboutToBeRemovedTime = 3.0;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__,0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._.lodGameObjects = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.lodGameObjects >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._.disableVisualizationDistance = 40.0;
  (this->fields)._.cullDistance = 145.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

