
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
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
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
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
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
  if (vehicleSeatManager != (VehicleSeatManager *)0x0) {
    pVVar1 = (vehicleSeatManager->fields).OnSeatOccupiedChange;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,
                 MethodInfo__HamsterWheelVisualization__OnSeatOccupiedChange__,(MethodInfo *)0x0);
      VStack_2.z = (float)mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pVVar1,(Delegate *)this_00,(MethodInfo *)0x0);
      if ((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z ==
          (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
        (vehicleSeatManager->fields).OnSeatOccupiedChange =
             (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
      }
      else {
        pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
        if (((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z)->klass ==
            TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate) {
          pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z;
        }
        if (pVVar1 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0)
        goto code_?;
        (vehicleSeatManager->fields).OnSeatOccupiedChange = pVVar1;
        pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
        if (((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z)->klass ==
            TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate) {
          pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z;
        }
        if (pVVar1 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0)
        goto code_?;
      }
      VStack_2.z = (float)&(vehicleSeatManager->fields).OnSeatOccupiedChange;
      VStack_2.y = (float)&UNK_?;
      func_?();
      if (health != (MVRuntimeDataVariableClampedFloat *)0x0) {
        fVar3 = (float10)(*(health->klass->vtable).get_Value.methodPtr)
                                    (health,(health->klass->vtable).get_Value.method);
        (this->fields).curHealth = (float)fVar3;
        pMVar4 = (health->fields)._._.OnChange;
        pUVar5 = (UnityAction_1_System_Object_ *)
                 func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        if (pUVar5 != (UnityAction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar5,(Object *)this,
                     MethodInfo__HamsterWheelVisualization___Init_b__16_0_System__Object_,
                     (MethodInfo *)0x0);
          VStack_2.z = (float)mscorlib.dll::System::Delegate::Delegate_Combine
                                         ((Delegate *)pMVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
          if ((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z ==
              (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
            (health->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          }
          else {
            pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
            if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)
                ((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z)->klass ==
                TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z;
            }
            if (pVVar1 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0)
            goto code_?;
            (health->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pVVar1;
            pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
            if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)
                ((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z)->klass ==
                TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z;
            }
            if (pVVar1 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0)
            goto code_?;
          }
          VStack_2.z = (float)&(health->fields)._._.OnChange;
          VStack_2.y = (float)&UNK_?;
          func_?();
          if (isGrounded != (MVRuntimeDataVariable *)0x0) {
            pMVar4 = (isGrounded->fields).OnChange;
            pUVar5 = (UnityAction_1_System_Object_ *)
                     func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
            if (pUVar5 != (UnityAction_1_System_Object_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (pUVar5,(Object *)this,
                         MethodInfo__HamsterWheelVisualization___Init_b__16_1_System__Object_,
                         (MethodInfo *)0x0);
              VStack_2.z = (float)mscorlib.dll::System::Delegate::Delegate_Combine
                                             ((Delegate *)pMVar4,(Delegate *)pUVar5,
                                              (MethodInfo *)0x0);
              if ((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z ==
                  (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
                (isGrounded->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              }
              else {
                pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
                if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)
                    ((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z)->klass ==
                    TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                  pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z;
                }
                if (pVVar1 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0)
                goto code_?;
                (isGrounded->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pVVar1;
                pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
                if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)
                    ((VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z)->klass ==
                    TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                  pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)VStack_2.z;
                }
                if (pVVar1 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0)
                goto code_?;
              }
              VStack_2.z = (float)&(isGrounded->fields).OnChange;
              VStack_2.y = (float)&UNK_?;
              func_?();
              pTVar6 = (this->fields).hamsterWheelVisualizationRoot;
              pVVar7 = (this->fields).vehicleBlinker;
              if (pTVar6 != (Transform *)0x0) {
                pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0);
                if (pGVar8 != (GameObject *)0x0) {
                  pMVar9 = (MeshFilter__Array *)
                           Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                     ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar8,
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
                        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_op_Inequality
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
            }
          }
        }
      }
    }
  }
code_?:
  VStack_2.z = (float)func_?();
code_?:
  VStack_2.y = (float)&UNK_?;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  uStack_1 = 0;
  fStack_2 = 0.0;
  if ((this->fields)._.isInSpawner == 0) {
    if ((this->fields).vehicleIsUnoccupied == 0) {
      pVVar3 = (this->fields).vehicleSeatManager;
      if (pVVar3 == (VehicleSeatManager *)0x0) goto code_?;
      if ((pVVar3->fields).occupiedSeatCount == 0) {
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).unoccupiedTime = fVar4;
        (this->fields).vehicleIsUnoccupied = 1;
      }
      if ((this->fields).vehicleIsUnoccupied == 0) goto code_?;
    }
    pVVar3 = (this->fields).vehicleSeatManager;
    if (pVVar3 == (VehicleSeatManager *)0x0) goto code_?;
    if (0 < (pVVar3->fields).occupiedSeatCount) {
      (this->fields).vehicleIsUnoccupied = 0;
    }
    if (((this->fields).vehicleIsUnoccupied != 0) &&
       (fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
       _UNK_? - (fVar4 - (this->fields).unoccupiedTime) <
       (this->fields).vehicleAboutToBeRemovedTime)) {
      this_00 = (this->fields).vehicleBlinker;
      if (this_00 == (VehicleBlinker *)0x0) goto code_?;
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,0.3,(MethodInfo *)0x0);
    }
  }
code_?:
  puVar5 = (undefined8 *)func_?(&stack0xffffffc0,&(this->fields).velocity,0);
  uStack_6 = *puVar5;
  fStack_7 = *(float *)(puVar5 + 1);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_9._0_4_ = (pVVar8->upVector).x;
  uStack_9._4_4_ = (pVVar8->upVector).y;
  fStack_10 = (pVVar8->upVector).z;
  puStack_11 = (undefined *)
               ((float)(undefined4)uStack_9 * fStack_7 - (float)uStack_6 * fStack_10);
  pDStack_12 = (Dictionary_2_System_Object_System_Object___Class *)
               ((float)uStack_6 * (float)uStack_9._4_4_ -
               (float)(undefined4)uStack_9 * uStack_6._4_4_);
  fVar13 = (float10)func_?(&(this->fields).velocity,0);
  fStack_14 = (float)fVar13;
  if ((this->fields).vehicleIsUnoccupied == 0) {
    fVar4 = (this->fields).velocity.x;
    pVVar3 = (this->fields).vehicleSeatManager;
    fStack_2 = (this->fields).velocity.z;
    uStack_1 = (ulonglong)(uint)fVar4;
    fStack_15 = fStack_2;
    if (((pVVar3 == (VehicleSeatManager *)0x0) ||
        (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (pVVar3->fields).seats,
        this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) ||
       (RVar16 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_01,0,
                           MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                          ), RVar16 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    iVar17 = *(int *)((int)RVar16 + 0x10);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_03 == (MVNetworkGame *)0x0) goto code_?;
    fStack_18 = (float)MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                                (this_03,(MethodInfo *)0x0);
    if (_UNK_? < fVar4 * fVar4 + 0.0 + fStack_15 * fStack_15) {
      if ((iVar17 == 0) || (*(int *)(iVar17 + 0x144) == 0)) goto code_?;
      pTVar19 = *(Transform **)(*(int *)(iVar17 + 0x144) + 0x90);
      pVVar20 = (Vector3 *)func_?(&uStack_6,&uStack_1,0);
      if (pTVar19 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                (pTVar19,*pVVar20,(MethodInfo *)0x0);
      if ((this->fields).speedState == 0) {
        pDStack_12 = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)pDVar21,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar21,(Object *)StringLiteral_state,(Object *)StringLiteral_Walk,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        fStack_15 = fStack_18;
        pOVar22 = (Object *)func_?(TypeInfo__System__Int32,&fStack_15);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar21,(Object *)StringLiteral_timeStamp,pOVar22,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if (*(MVRuntimeDataVariable **)(iVar17 + 0xfc) == (MVRuntimeDataVariable *)0x0)
        goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  (*(MVRuntimeDataVariable **)(iVar17 + 0xfc),(Object *)pDVar21,(MethodInfo *)0x0);
        (this->fields).speedState = 1;
      }
    }
    else if ((this->fields).speedState != 0) {
      pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      if (pDVar21 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar21,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar21,(Object *)StringLiteral_state,(Object *)StringLiteral_Idle,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      fStack_15 = fStack_18;
      pOVar22 = (Object *)func_?(TypeInfo__System__Int32,&fStack_15);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar21,(Object *)StringLiteral_timeStamp,pOVar22,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((iVar17 == 0) ||
         (*(MVRuntimeDataVariable **)(iVar17 + 0xfc) == (MVRuntimeDataVariable *)0x0))
      goto code_?;
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                (*(MVRuntimeDataVariable **)(iVar17 + 0xfc),(Object *)pDVar21,(MethodInfo *)0x0);
      (this->fields).speedState = 0;
    }
  }
  this_02 = (this->fields).wheel;
  if (this_02 != (GameObject *)0x0) {
    pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_02,(MethodInfo *)0x0);
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (pTVar19 != (Transform *)0x0) {
      auVar23._4_4_ = pDStack_12;
      auVar23._0_4_ = puStack_11;
      auVar23._8_4_ = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                (pTVar19,(Vector3)(auVar23 << 0x20),
                 (float)((uint)fStack_14 ^
                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
                 fVar4 * _UNK_?,Space__Enum_World,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
  if (this_00 != (List_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    (this->fields)._.lodGameObjects = this_00;
    func_?(&(this->fields)._.lodGameObjects,this_00);
    (this->fields)._.disableVisualizationDistance = 40.0;
    (this->fields)._.cullDistance = 145.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

