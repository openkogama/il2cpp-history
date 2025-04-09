
/* Void Awake() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_Awake
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).unoccupiedTime = fVar1;
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_FixedUpdate
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  this_00 = (this->fields).wheel;
  if ((this_00 == (GameObject *)0x0) ||
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), this_01 == (Transform *)0x0))
  goto code_?;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     (&VStack_2,this_01,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  VStack_2.x = (this->fields).prevPosition.x;
  VStack_2.y = (this->fields).prevPosition.y;
  fVar5 = (float)(undefined4)uStack_3 - VStack_2.x;
  VStack_2.z = (this->fields).prevPosition.z;
  fStack_6 = (float)uStack_3._4_4_ - VStack_2.y;
  fStack_7 = fVar4 - VStack_2.z;
  fStack_8 = fVar4;
  uStack_9 = uStack_3;
  fStack_10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
  ;
  VStack_2.z = fStack_7 / fStack_10;
  (this->fields).velocity.x = fVar5 / fStack_10;
  (this->fields).velocity.y = fStack_6 / fStack_10;
  (this->fields).velocity.z = VStack_2.z;
  fVar11 = (float10)func_?(&(this->fields).velocity,0);
  (this->fields).velocity.y = 0.0;
  (this->fields).prevPosition.x = (float)(undefined4)uStack_9;
  (this->fields).prevPosition.y = (float)uStack_9._4_4_;
  fStack_7 = (float)fVar11;
  (this->fields).prevPosition.z = fVar4;
  fVar11 = (float10)func_?(&(this->fields).velocity,0);
  fStack_10 = (float)fVar11;
  if ((_UNK_? < fStack_10) || (fStack_10 < _UNK_?)) {
    pAVar12 = (this->fields).audioSourceRolling;
    if (pAVar12 == (AudioSource *)0x0) goto code_?;
    bVar13 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar12,(MethodInfo *)0x0);
    if (bVar13 == 0) {
      pAVar12 = (this->fields).audioSourceRolling;
      if (pAVar12 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar12,1.0,(MethodInfo *)0x0);
      pAVar12 = (this->fields).audioSourceRolling;
      if (pAVar12 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar12,(MethodInfo *)0x0);
    }
  }
  if ((fStack_10 <= _UNK_?) && (_UNK_? <= fStack_10)) {
    pAVar12 = (this->fields).audioSourceRolling;
    if (pAVar12 == (AudioSource *)0x0) goto code_?;
    bVar13 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar12,(MethodInfo *)0x0);
    if (bVar13 != 0) {
      pAVar12 = (this->fields).audioSourceRolling;
      if (pAVar12 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar12,0.0,(MethodInfo *)0x0);
      pAVar12 = (this->fields).audioSourceRolling;
      if (pAVar12 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (pAVar12,(MethodInfo *)0x0);
    }
  }
  fVar5 = fStack_10 / _UNK_?;
  pAVar12 = (this->fields).audioSourceRolling;
  fVar4 = _UNK_?;
  if ((fVar5 < _UNK_?) || (fVar4 = _UNK_?, _UNK_? < fVar5)) {
    fVar5 = fVar4;
  }
  if (pAVar12 == (AudioSource *)0x0) goto code_?;
  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
            (pAVar12,fVar5,(MethodInfo *)0x0);
  if ((_UNK_? < fStack_10) || (fStack_10 < _UNK_?)) {
    pAVar12 = (this->fields).audioSourceWind;
    if (pAVar12 == (AudioSource *)0x0) goto code_?;
    bVar13 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar12,(MethodInfo *)0x0);
    if (bVar13 == 0) {
      pAVar12 = (this->fields).audioSourceWind;
      if (pAVar12 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar12,0.08,(MethodInfo *)0x0);
      pAVar12 = (this->fields).audioSourceWind;
      if (pAVar12 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar12,(MethodInfo *)0x0);
    }
  }
  if ((fStack_10 <= _UNK_?) && (_UNK_? <= fStack_10)) {
    pAVar12 = (this->fields).audioSourceWind;
    if (pAVar12 == (AudioSource *)0x0) goto code_?;
    bVar13 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar12,(MethodInfo *)0x0);
    if (bVar13 != 0) {
      pAVar12 = (this->fields).audioSourceWind;
      if (pAVar12 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar12,0.0,(MethodInfo *)0x0);
      pAVar12 = (this->fields).audioSourceWind;
      if (pAVar12 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (pAVar12,(MethodInfo *)0x0);
    }
  }
  fVar4 = fStack_7 / _UNK_?;
  pAVar12 = (this->fields).audioSourceWind;
  fVar5 = _UNK_?;
  if ((fVar4 < _UNK_?) || (fVar5 = _UNK_?, _UNK_? < fVar4)) {
    fVar4 = fVar5;
  }
  if (pAVar12 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (pAVar12,fVar4,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).unoccupiedTime = fVar2;
      (this->fields).vehicleIsUnoccupied = 1;
    }
    if ((this->fields).vehicleIsUnoccupied == 0) {
      return;
    }
  }
  pVVar1 = (this->fields).vehicleSeatManager;
  if (pVVar1 == (VehicleSeatManager *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < (pVVar1->fields).occupiedSeatCount) {
    (this->fields).vehicleIsUnoccupied = 0;
  }
  if (((this->fields).vehicleIsUnoccupied != 0) &&
     (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     _UNK_? - (fVar2 - (this->fields).unoccupiedTime) <
     (this->fields).vehicleAboutToBeRemovedTime)) {
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,0.3,(MethodInfo *)0x0);
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
    func_?(&
                    AvatarBlobShadowController_MethodInfo__UnityEngine__Component__GetComponentInChildren<AvatarBlobShadowController>__
                   );
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    func_?(&MethodInfo__HamsterWheelVisualization__OnSeatOccupiedChange__);
    func_?(&MethodInfo__HamsterWheelVisualization___Init_b__16_0_System__Object_);
    func_?(&MethodInfo__HamsterWheelVisualization___Init_b__16_1_System__Object_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate);
    cRam_? = '\x01';
  }
  (this->fields)._.isInSpawner = isInSpawner;
  (this->fields).vehicleSeatManager = vehicleSeatManager;
  func_?(&(this->fields).vehicleSeatManager,vehicleSeatManager);
  if (vehicleSeatManager == (VehicleSeatManager *)0x0) goto code_?;
  pVVar1 = (vehicleSeatManager->fields).OnSeatOccupiedChange;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__HamsterWheelVisualization__OnSeatOccupiedChange__,
             (MethodInfo *)0x0);
  VStack_2.z = (float)mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pVVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if ((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z ==
      (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
    (vehicleSeatManager->fields).OnSeatOccupiedChange =
         (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
code_?:
    VStack_2.z = (float)&(vehicleSeatManager->fields).OnSeatOccupiedChange;
    VStack_2.y = (float)&UNK_?;
    func_?();
    if (health == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    fVar3 = (float10)(*(code *)(health->klass->vtable).get_Value.method)
                                (health,(health->klass->vtable).set_Value.methodPtr);
    (this->fields).curHealth = (float)fVar3;
    pMVar4 = (health->fields)._._.OnChange;
    pVVar5 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
             func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (pVVar5,(Object *)this,
               MethodInfo__HamsterWheelVisualization___Init_b__16_0_System__Object_,
               (MethodInfo *)0x0);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar4,(Delegate *)pVVar5,(MethodInfo *)0x0);
    if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (health->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      VStack_2.z = (float)&UNK_?;
      func_?();
      if (isGrounded == (MVRuntimeDataVariable *)0x0) goto code_?;
      pMVar4 = (isGrounded->fields).OnChange;
      pVVar5 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
               func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (pVVar5,(Object *)this,
                 MethodInfo__HamsterWheelVisualization___Init_b__16_1_System__Object_,
                 (MethodInfo *)0x0);
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar4,(Delegate *)pVVar5,(MethodInfo *)0x0);
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (isGrounded->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
        VStack_2.z = (float)&UNK_?;
        func_?();
        pTVar6 = (this->fields).hamsterWheelVisualizationRoot;
        pVVar7 = (this->fields).vehicleBlinker;
        if (pTVar6 != (Transform *)0x0) {
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar6,(MethodInfo *)0x0);
          if (pGVar8 != (GameObject *)0x0) {
            pMVar9 = (MeshFilter__Array *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren
                               (pGVar8,
                                UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                               );
            if (pVVar7 != (VehicleBlinker *)0x0) {
              (pVVar7->fields)._.meshFilters = pMVar9;
              func_?(&(pVVar7->fields)._.meshFilters,pMVar9);
              pVVar7 = (this->fields).vehicleBlinker;
              if (pVVar7 != (VehicleBlinker *)0x0) {
                (pVVar7->fields)._.visible = 1;
                if (isInSpawner != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)this,0,(MethodInfo *)0x0);
                }
                pTVar6 = (this->fields).hamsterWheelVisualizationRoot;
                if (pTVar6 != (Transform *)0x0) {
                  pAVar10 = (AvatarBlobShadowController *)
                            UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_GetComponentInChildren_1
                                      ((Component *)pTVar6,
                                       AvatarBlobShadowController_MethodInfo__UnityEngine__Component__GetComponentInChildren<AvatarBlobShadowController>__
                                      );
                  (this->fields).blobShadow = pAVar10;
                  func_?(&(this->fields).blobShadow,pAVar10);
                  pAVar10 = (this->fields).blobShadow;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                    ((Object_1 *)pAVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar11 != 0) {
                    pAVar10 = (this->fields).blobShadow;
                    if (pAVar10 == (AvatarBlobShadowController *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pAVar10,0,(MethodInfo *)0x0);
                  }
                  pGVar8 = (this->fields).wheel;
                  if (pGVar8 != (GameObject *)0x0) {
                    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
                    if (pTVar6 != (Transform *)0x0) {
                      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position(&VStack_2,pTVar6,(MethodInfo *)0x0);
                      fVar13 = pVVar12->y;
                      fVar14 = pVVar12->z;
                      (this->fields).prevPosition.x = pVVar12->x;
                      (this->fields).prevPosition.y = fVar13;
                      (this->fields).prevPosition.z = fVar14;
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
code_?:
        func_?();
        goto code_?;
      }
      pMVar15 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar15 = pMVar4;
      }
      if (pMVar15 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (isGrounded->fields).OnChange = pMVar15;
        pMVar15 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar15 = pMVar4;
        }
        if (pMVar15 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        goto code_?;
      }
code_?:
      VStack_2.z = (float)&UNK_?;
      func_?();
    }
    else {
      pMVar15 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar15 = pMVar4;
      }
      if (pMVar15 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (health->fields)._._.OnChange = pMVar15;
        pMVar15 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar15 = pMVar4;
        }
        if (pMVar15 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
code_?:
        VStack_2.z = (float)&UNK_?;
        func_?();
        goto code_?;
      }
    }
    VStack_2.z = (float)&UNK_?;
    func_?();
    VStack_2.z = (float)extraout_ECX;
  }
  else {
    pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
    if (((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z)->klass ==
        TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate) {
      pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z;
    }
    if (pVVar1 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) goto code_?;
    (vehicleSeatManager->fields).OnSeatOccupiedChange = pVVar1;
    pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
    if (((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z)->klass ==
        TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate) {
      pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z;
    }
    if (pVVar1 != (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) goto code_?;
  }
  VStack_2.y = (float)&UNK_?;
  func_?();
  VStack_2.z = (float)extraout_ECX_00;
code_?:
  VStack_2.y = (float)&UNK_?;
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_OnDisable
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).vehicleBlinker;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pVVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pVVar1 = (this->fields).vehicleBlinker;
    if (pVVar1 == (VehicleBlinker *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pVVar1,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_OnEnable
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  this_00 = (this->fields).vehicleBlinker;
  if (this_00 != (VehicleBlinker *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGroundedChange(Boolean) */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_OnGroundedChange
               (HamsterWheelVisualization *this,bool val,MethodInfo *method)

{
  this_00 = (this->fields).audioSourceRolling;
  if (val == 0) {
    if (this_00 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (this_00,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  else if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (this_00,1.0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      func_?();
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
  BlinkerBase::BlinkerBase_StartBlinking((BlinkerBase *)this_00,type,0.3,(MethodInfo *)0x0);
code_?:
  (this->fields).curHealth = newHealth;
  return;
}


/* Void OnSeatOccupiedChange() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_OnSeatOccupiedChange
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).vehicleSeatManager;
  if (pVVar1 == (VehicleSeatManager *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (this->fields).blobShadow;
  if ((pVVar1->fields).occupiedSeatCount == 0) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pAVar3 = (this->fields).blobShadow;
      if (pAVar3 != (AvatarBlobShadowController *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pAVar3,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  else {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pAVar3 = (this->fields).blobShadow;
      if (pAVar3 == (AvatarBlobShadowController *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pAVar3,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_Update
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_)
    ;
    func_?(&StringLiteral_timeStamp);
    func_?(&StringLiteral_Walk);
    func_?(&StringLiteral_state);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  pHVar1 = this;
  uStack_2 = 0;
  fStack_3 = 0.0;
  if ((this->fields)._.isInSpawner == 0) {
    if ((this->fields).vehicleIsUnoccupied == 0) {
      pVVar4 = (this->fields).vehicleSeatManager;
      if (pVVar4 == (VehicleSeatManager *)0x0) goto code_?;
      if ((pVVar4->fields).occupiedSeatCount == 0) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (pHVar1->fields).unoccupiedTime = fVar5;
        (pHVar1->fields).vehicleIsUnoccupied = 1;
      }
      if ((pHVar1->fields).vehicleIsUnoccupied == 0) goto code_?;
    }
    pVVar4 = (pHVar1->fields).vehicleSeatManager;
    if (pVVar4 == (VehicleSeatManager *)0x0) goto code_?;
    if (0 < (pVVar4->fields).occupiedSeatCount) {
      (pHVar1->fields).vehicleIsUnoccupied = 0;
    }
    if (((pHVar1->fields).vehicleIsUnoccupied != 0) &&
       (this = (HamsterWheelVisualization *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
       _UNK_? - ((float)this - (pHVar1->fields).unoccupiedTime) <
       (pHVar1->fields).vehicleAboutToBeRemovedTime)) {
      this_00 = (pHVar1->fields).vehicleBlinker;
      if (this_00 == (VehicleBlinker *)0x0) goto code_?;
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,0.3,(MethodInfo *)0x0);
    }
  }
code_?:
  puVar6 = (undefined8 *)func_?(&uStack_7,&(pHVar1->fields).velocity,0);
  uVar8 = *puVar6;
  fVar5 = *(float *)(puVar6 + 1);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar9 = (float)uVar8;
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_7._0_4_ = (pVVar10->upVector).x;
  uStack_7._4_4_ = (pVVar10->upVector).y;
  fStack_11 = (pVVar10->upVector).z;
  puStack_12 = (undefined *)((ulonglong)uVar8 >> 0x20);
  pDStack_13 = (Dictionary_2_System_Object_System_Object___Class *)
               (fVar9 * (float)uStack_7._4_4_ - (float)(undefined4)uStack_7 * (float)puStack_12);
  puStack_12 = (undefined *)((float)(undefined4)uStack_7 * fVar5 - fVar9 * fStack_11);
  fVar14 = (float10)func_?(&(pHVar1->fields).velocity,0);
  fStack_15 = (float)fVar14;
  if ((pHVar1->fields).vehicleIsUnoccupied == 0) {
    this = (HamsterWheelVisualization *)(pHVar1->fields).velocity.x;
    pVVar4 = (pHVar1->fields).vehicleSeatManager;
    fStack_3 = (pHVar1->fields).velocity.z;
    uStack_2 = ZEXT48(this);
    fStack_16 = fStack_3;
    if (((pVVar4 == (VehicleSeatManager *)0x0) ||
        (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (pVVar4->fields).seats,
        this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) ||
       (RVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (this_01,0,
                            MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                           ), RVar17 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    pHVar18 = *(HamsterWheelVisualization **)((int)RVar17 + 0x14);
    pHStack_19 = pHVar18;
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_03 == (MVNetworkGame *)0x0) goto code_?;
    pHStack_20 = (HamsterWheelVisualization *)
                MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_03,(MethodInfo *)0x0)
    ;
    if (_UNK_? < (float)this * (float)this + 0.0 + fStack_16 * fStack_16) {
      if ((pHVar18 == (HamsterWheelVisualization *)0x0) ||
         (pCVar21 = pHVar18[3].fields._._.m_CancellationTokenSource,
         pCVar21 == (CancellationTokenSource *)0x0)) goto code_?;
      this = (HamsterWheelVisualization *)pCVar21[4].klass;
      pVVar22 = (Vector3 *)func_?(&uStack_7,&uStack_2,0);
      if (this == (HamsterWheelVisualization *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                ((Transform *)this,*pVVar22,(MethodInfo *)0x0);
      if ((pHVar1->fields).speedState == 0) {
        pDStack_13 = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        this = (HamsterWheelVisualization *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (this == (HamsterWheelVisualization *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_state,
                   (Object *)StringLiteral_Walk,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pHStack_19 = pHStack_20;
        pOVar23 = (Object *)func_?(TypeInfo__System__Int32,&pHStack_19);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this,
                   (Object *)StringLiteral_timeStamp,pOVar23,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pVVar4 = pHVar18[2].fields.vehicleSeatManager;
        if (pVVar4 == (VehicleSeatManager *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  ((MVRuntimeDataVariable *)pVVar4,(Object *)this,(MethodInfo *)0x0);
        (pHVar1->fields).speedState = 1;
      }
    }
    else if ((pHVar1->fields).speedState != 0) {
      this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_04,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (this_04 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_04,(Object *)StringLiteral_state,
                 (Object *)StringLiteral_Idle,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      this = pHStack_20;
      pOVar23 = (Object *)func_?(TypeInfo__System__Int32,&this);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_04,
                 (Object *)StringLiteral_timeStamp,pOVar23,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((pHStack_19 == (HamsterWheelVisualization *)0x0) ||
         (pVVar4 = pHStack_19[2].fields.vehicleSeatManager, pVVar4 == (VehicleSeatManager *)0x0))
      goto code_?;
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                ((MVRuntimeDataVariable *)pVVar4,(Object *)this_04,(MethodInfo *)0x0);
      (pHVar1->fields).speedState = 0;
    }
  }
  this_02 = (pHVar1->fields).wheel;
  if (this_02 != (GameObject *)0x0) {
    this_05 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_02,(MethodInfo *)0x0);
    this = (HamsterWheelVisualization *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_05 != (Transform *)0x0) {
      auVar24._4_4_ = pDStack_13;
      auVar24._0_4_ = puStack_12;
      auVar24._8_4_ = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                (this_05,(Vector3)(auVar24 << 0x20),
                 (float)((uint)fStack_15 ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                 (float)this * _UNK_?,Space__Enum_World,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void <Init>b__16_0(Object) */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization__Init_b__16_0
               (HamsterWheelVisualization *this,Object *healthVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (healthVal != (Object *)0x0) {
    pSVar1 = TypeInfo__System__Single;
    if ((healthVal->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?(healthVal);
    fVar3 = *pfVar2;
    fVar4 = (this->fields).curHealth;
    if (fVar3 < fVar4) {
      this_00 = (this->fields).vehicleBlinker;
      if (this_00 == (VehicleBlinker *)0x0) goto code_?;
      type = BlinkType__Enum_Damage;
    }
    else {
      if (fVar3 <= fVar4) goto code_?;
      this_00 = (this->fields).vehicleBlinker;
      if (this_00 == (VehicleBlinker *)0x0) goto code_?;
      type = BlinkType__Enum_Healing;
    }
    BlinkerBase::BlinkerBase_StartBlinking((BlinkerBase *)this_00,type,0.3,(MethodInfo *)0x0);
code_?:
    (this->fields).curHealth = fVar3;
    return;
  }
code_?:
  func_?();
  healthVal = extraout_ECX;
  pSVar1 = extraout_EDX;
code_?:
  func_?(healthVal,pSVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Init>b__16_1(Object) */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization__Init_b__16_1
               (HamsterWheelVisualization *this,Object *val,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (val != (Object *)0x0) {
    if ((val->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar2 = (char *)func_?();
    this_00 = (this->fields).audioSourceRolling;
    if (*pcVar2 == '\0') {
      if (this_00 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_00,0.0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (this_00 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (this_00,1.0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
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
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  (this->fields)._.lodGameObjects = this_00;
  func_?(&(this->fields)._.lodGameObjects,this_00);
  (this->fields)._.disableVisualizationDistance = 40.0;
  (this->fields)._.cullDistance = 145.0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

