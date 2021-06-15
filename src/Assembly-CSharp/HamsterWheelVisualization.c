
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).wheel;
  if ((this_00 == (GameObject *)0x0) ||
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), this_01 == (Transform *)0x0))
  goto code_?;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
  uVar2._0_4_ = (this->fields).prevPosition.x;
  uVar2._4_4_ = (this->fields).prevPosition.y;
  VStack_3.y = pVVar1->x;
  VStack_3.z = pVVar1->y;
  fVar4 = pVVar1->z;
  fVar5 = (this->fields).prevPosition.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar4;
  a.x = VStack_3.y;
  a.y = VStack_3.z;
  b.z = fVar5;
  b.x = (float)(int)uVar2;
  b.y = (float)(int)((ulonglong)uVar2 >> 0x20);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xfffffff0,a,b,(MethodInfo *)0x0);
  uVar6 = 0;
  VStack_3.y = pVVar1->x;
  VStack_3.z = pVVar1->y;
  fVar5 = pVVar1->z;
  puVar7 = &UNK_?;
  d = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  uVar2 = VStack_3._4_8_;
  VStack_3.z = (float)&UNK_?;
  uVar8 = VStack_3._4_8_;
  a_00.z = fVar5;
  VStack_3.y = (float)uVar2;
  VStack_3.z = SUB84(uVar2,4);
  a_00.x = VStack_3.y;
  a_00.y = VStack_3.z;
  VStack_3._4_8_ = uVar8;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                     (&VStack_3,a_00,d,(MethodInfo *)0x0);
  uVar2._4_4_ = pVVar1->y;
  uVar2._0_4_ = pVVar1->z;
  (this->fields).velocity.x = pVVar1->x;
  (this->fields).velocity.y = uVar2._4_4_;
  (this->fields).velocity.z = (float)uVar2;
  fVar9 = (float10)func_?();
  (this->fields).velocity.y = 0.0;
  (this->fields).prevPosition.x = (float)puVar7;
  (this->fields).prevPosition.y = (float)uVar6;
  VStack_3.z = (float)fVar9;
  (this->fields).prevPosition.z = fVar4;
  fVar9 = (float10)func_?();
  uVar2._0_4_ = (float)fVar9;
  if ((_UNK_? < (float)uVar2) || ((float)uVar2 < _UNK_?)) {
    pAVar10 = (this->fields).audioSourceRolling;
    if (pAVar10 == (AudioSource *)0x0) goto code_?;
    bVar11 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar10,(MethodInfo *)0x0);
    if (bVar11 == 0) {
      pAVar10 = (this->fields).audioSourceRolling;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar10,1.0,(MethodInfo *)0x0);
      pAVar10 = (this->fields).audioSourceRolling;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar10,(MethodInfo *)0x0);
    }
  }
  if (((float)uVar2 <= _UNK_?) && (_UNK_? <= (float)uVar2)) {
    pAVar10 = (this->fields).audioSourceRolling;
    if (pAVar10 == (AudioSource *)0x0) goto code_?;
    bVar11 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar10,(MethodInfo *)0x0);
    if (bVar11 != 0) {
      pAVar10 = (this->fields).audioSourceRolling;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar10,0.0,(MethodInfo *)0x0);
      pAVar10 = (this->fields).audioSourceRolling;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                (pAVar10,(MethodInfo *)0x0);
    }
  }
  pAVar10 = (this->fields).audioSourceRolling;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  uVar2._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                          ((float)uVar2 / _UNK_?,0.2,3.0,(MethodInfo *)0x0);
  if (pAVar10 == (AudioSource *)0x0) goto code_?;
  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
            (pAVar10,uVar2._4_4_,(MethodInfo *)0x0);
  if ((_UNK_? < (float)uVar2) || ((float)uVar2 < _UNK_?)) {
    pAVar10 = (this->fields).audioSourceWind;
    if (pAVar10 == (AudioSource *)0x0) goto code_?;
    bVar11 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar10,(MethodInfo *)0x0);
    if (bVar11 == 0) {
      pAVar10 = (this->fields).audioSourceWind;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar10,0.08,(MethodInfo *)0x0);
      pAVar10 = (this->fields).audioSourceWind;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar10,(MethodInfo *)0x0);
    }
  }
  if (((float)uVar2 <= _UNK_?) && (_UNK_? <= (float)uVar2)) {
    pAVar10 = (this->fields).audioSourceWind;
    if (pAVar10 == (AudioSource *)0x0) goto code_?;
    bVar11 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar10,(MethodInfo *)0x0);
    if (bVar11 != 0) {
      pAVar10 = (this->fields).audioSourceWind;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar10,0.0,(MethodInfo *)0x0);
      pAVar10 = (this->fields).audioSourceWind;
      if (pAVar10 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                (pAVar10,(MethodInfo *)0x0);
    }
  }
  pAVar10 = (this->fields).audioSourceWind;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  uVar2._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                          (VStack_3.z / _UNK_?,0.4,5.0,(MethodInfo *)0x0);
  if (pAVar10 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (pAVar10,(float)uVar2,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void HandleUnoccupiedVehicle() */

void Assembly-CSharp.dll::HamsterWheelVisualization::
     HamsterWheelVisualization_HandleUnoccupiedVehicle
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  if ((this->fields).vehicleIsUnoccupied == 0) {
    pEVar1 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
              *)(this->fields).vehicleSeatManager;
    if (pEVar1 == (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                   *)0x0) goto code_?;
    pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       (pEVar1,(MethodInfo *)0x0);
    if (pOVar2 == (Object *)0x0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).unoccupiedTime = fVar3;
      (this->fields).vehicleIsUnoccupied = 1;
    }
    if ((this->fields).vehicleIsUnoccupied == 0) {
      return;
    }
  }
  pEVar1 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
            *)(this->fields).vehicleSeatManager;
  if (pEVar1 == (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                 *)0x0) {
code_?:
    func_?(0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
           Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
           Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                     (pEVar1,(MethodInfo *)0x0);
  if (0 < (int)pOVar2) {
    (this->fields).vehicleIsUnoccupied = 0;
  }
  if (((this->fields).vehicleIsUnoccupied != 0) &&
     (fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     _UNK_? - (fVar3 - (this->fields).unoccupiedTime) <
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.isInSpawner = isInSpawner;
  (this->fields).vehicleSeatManager = vehicleSeatManager;
  if (vehicleSeatManager != (VehicleSeatManager *)0x0) {
    pVVar1 = (vehicleSeatManager->fields).OnSeatOccupiedChange;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__HamsterWheelVisualization__OnSeatOccupiedChange__,
               (MethodInfo *)0x0);
    pVVar3 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pVVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
    if (pVVar3 != (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
      if (pVVar3->klass == TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate) {
        pVVar1 = pVVar3;
      }
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
                TypeInfo__VehicleSeatManager__OnSeatOccupiedChangeDelegate;
      if (pVVar1 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) goto code_?;
    }
    (vehicleSeatManager->fields).OnSeatOccupiedChange = pVVar1;
    if (health != (MVRuntimeDataVariableClampedFloat *)0x0) {
      fVar5 = (float10)(*(code *)(health->klass->vtable).get_Value.method)
                                  (health,(health->klass->vtable).set_Value.methodPtr);
      (this->fields).curHealth = (float)fVar5;
      pMVar6 = (health->fields)._._.OnChange;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__HamsterWheelVisualization___Init_m__0_System__Object_,(MethodInfo *)0x0
                );
      pVVar3 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar6,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
      if (pVVar3 != (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pVVar3->klass ==
            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pVVar1 = pVVar3;
        }
        pMVar4 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
        if (pVVar1 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) goto code_?;
      }
      (health->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pVVar1;
      if (isGrounded != (MVRuntimeDataVariable *)0x0) {
        pMVar6 = (isGrounded->fields).OnChange;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__HamsterWheelVisualization___Init_m__1_System__Object_,
                   (MethodInfo *)0x0);
        pVVar3 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar6,(Delegate *)pUVar2,(MethodInfo *)0x0);
        pVVar1 = (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0;
        if (pVVar3 != (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0) {
          if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pVVar3->klass ==
              TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pVVar1 = pVVar3;
          }
          pMVar4 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
          if (pVVar1 == (VehicleSeatManager_OnSeatOccupiedChangeDelegate *)0x0)
          goto code_?;
        }
        (isGrounded->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pVVar1;
        pTVar7 = (this->fields).hamsterWheelVisualizationRoot;
        pVVar8 = (this->fields).vehicleBlinker;
        if (pTVar7 != (Transform *)0x0) {
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pTVar7,(MethodInfo *)0x0);
          if (pGVar9 != (GameObject *)0x0) {
            avatarBody = (MVBody *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponentsInChildren_29
                                   (pGVar9,
                                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                                   );
            if (pVVar8 != (VehicleBlinker *)0x0) {
              AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
                        ((AccessoryPreviewPopup *)pVVar8,avatarBody,(MethodInfo *)0x0);
              pVVar8 = (this->fields).vehicleBlinker;
              if (pVVar8 != (VehicleBlinker *)0x0) {
                GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
                          ((GamePassesTextBubble *)pVVar8,1,(MethodInfo *)0x0);
                if (isInSpawner != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)this,0,(MethodInfo *)0x0);
                }
                pTVar7 = (this->fields).hamsterWheelVisualizationRoot;
                if (pTVar7 != (Transform *)0x0) {
                  x = UnityEngine.CoreModule.dll::UnityEngine::Component::
                      Component_1_GetComponentInChildren_12
                                ((Component_1 *)pTVar7,
                                 AvatarBlobShadowController_MethodInfo__UnityEngine__Component__GetComponentInChildren<AvatarBlobShadowController>__
                                );
                  (this->fields).blobShadow = (AvatarBlobShadowController *)x;
                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                    func_?();
                  }
                  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar10 != 0) {
                    this_00 = (this->fields).blobShadow;
                    if (this_00 == (AvatarBlobShadowController *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
                  }
                  pGVar9 = (this->fields).wheel;
                  if (pGVar9 != (GameObject *)0x0) {
                    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar9,(MethodInfo *)0x0);
                    if (pTVar7 != (Transform *)0x0) {
                      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xfffffff0,pTVar7,(MethodInfo *)0x0);
                      fVar12 = pVVar11->y;
                      fVar13 = pVVar11->z;
                      (this->fields).prevPosition.x = pVVar11->x;
                      (this->fields).prevPosition.y = fVar12;
                      (this->fields).prevPosition.z = fVar13;
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
code_?:
  func_?(0);
  pVVar3 = extraout_ECX;
  pMVar4 = extraout_EDX;
code_?:
  func_?(pVVar3,pMVar4);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_OnDisable
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).vehicleBlinker;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
      func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
             *)(this->fields).vehicleSeatManager;
  if (this_00 !=
      (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
       *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       (this_00,(MethodInfo *)0x0);
    pAVar2 = (this->fields).blobShadow;
    if (pOVar1 == (Object *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pAVar2 = (this->fields).blobShadow;
        if (pAVar2 != (AvatarBlobShadowController *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pAVar2,0,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pAVar2 = (this->fields).blobShadow;
        if (pAVar2 == (AvatarBlobShadowController *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pAVar2,1,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization_Update
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  if ((this->fields)._.isInSpawner == 0) {
    if ((this->fields).vehicleIsUnoccupied == 0) {
      pEVar3 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                *)(this->fields).vehicleSeatManager;
      if (pEVar3 == (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                     *)0x0) goto code_?;
      pOVar4 = System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         (pEVar3,(MethodInfo *)0x0);
      if (pOVar4 == (Object *)0x0) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).unoccupiedTime = fVar5;
        (this->fields).vehicleIsUnoccupied = 1;
      }
      if ((this->fields).vehicleIsUnoccupied == 0) goto code_?;
    }
    pEVar3 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
              *)(this->fields).vehicleSeatManager;
    if (pEVar3 == (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                   *)0x0) goto code_?;
    pOVar4 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       (pEVar3,(MethodInfo *)0x0);
    if (0 < (int)pOVar4) {
      (this->fields).vehicleIsUnoccupied = 0;
    }
    if (((this->fields).vehicleIsUnoccupied != 0) &&
       (fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
       _UNK_? - (fVar5 - (this->fields).unoccupiedTime) <
       (this->fields).vehicleAboutToBeRemovedTime)) {
      this_00 = (this->fields).vehicleBlinker;
      if (this_00 == (VehicleBlinker *)0x0) goto code_?;
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,0.3,(MethodInfo *)0x0);
    }
  }
code_?:
  pVVar6 = &(this->fields).velocity;
  puVar7 = (undefined8 *)func_?(&VStack_8,pVVar6,0);
  VStack_9._4_8_ = *puVar7;
  fVar5 = *(float *)(puVar7 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     (&VStack_8,(MethodInfo *)0x0);
  lhs.z = fVar5;
  lhs.x = VStack_9.y;
  lhs.y = VStack_9.z;
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                     (&VStack_9,lhs,*pVVar10,(MethodInfo *)0x0);
  VStack_8.y = pVVar10->x;
  VStack_8.z = pVVar10->y;
  VStack_9.z = pVVar10->z;
  fVar11 = (float10)func_?(pVVar6,0);
  fStack_12 = (float)fVar11;
  if ((this->fields).vehicleIsUnoccupied == 0) {
    func_?(&uStack_1,pVVar6->x,0,(this->fields).velocity.z,0);
    pVVar13 = (this->fields).vehicleSeatManager;
    if (((pVVar13 == (VehicleSeatManager *)0x0) ||
        (this_01 = (pVVar13->fields).seats, this_01 == (List_1_VehicleSeatBase_ *)0x0)) ||
       (this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,0,
                                MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                               ),
       this_03 ==
       (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
        *)0x0)) goto code_?;
    this_04 = (MVAvatar *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_03,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_05 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_05 == (MVNetworkGame *)0x0) goto code_?;
    iStack_14 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_05,(MethodInfo *)0x0);
    fVar11 = (float10)func_?(&uStack_1,0);
    if (_UNK_? < (float)fVar11) {
      if ((this_04 == (MVAvatar *)0x0) ||
         (this_06 = (PrefabPool *)MVAvatar::MVAvatar_get_Body(this_04,(MethodInfo *)0x0),
         this_06 == (PrefabPool *)0x0)) goto code_?;
      this_07 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_06,(MethodInfo *)0x0);
      pVVar6 = (Vector3 *)func_?(&stack0xffffffc0,&uStack_1,0);
      if (this_07 == (MVPointLightObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                ((Transform *)this_07,*pVVar6,(MethodInfo *)0x0);
      if ((this->fields).speedState == 0) {
        pDVar15 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar15,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (pDVar15 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (pDVar15,StringLiteral_state,
                   (CrossPlatformInputManager_VirtualButton *)StringLiteral_Walk,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        iStack_16 = iStack_14;
        pCVar17 = (CrossPlatformInputManager_VirtualButton *)
                 func_?(TypeInfo__System__Int32,&iStack_16);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (pDVar15,StringLiteral_timeStamp,pCVar17,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pMVar18 = (this_04->fields).Animation;
        if (pMVar18 == (MVRuntimeDataVariable *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  (pMVar18,(Object *)pDVar15,(MethodInfo *)0x0);
        (this->fields).speedState = 1;
      }
    }
    else if ((this->fields).speedState != 0) {
      pDVar15 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar15,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (pDVar15 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                (pDVar15,StringLiteral_state,
                 (CrossPlatformInputManager_VirtualButton *)StringLiteral_Idle,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      iStack_16 = iStack_14;
      pCVar17 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&iStack_16);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                (pDVar15,StringLiteral_timeStamp,pCVar17,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((this_04 == (MVAvatar *)0x0) ||
         (pMVar18 = (this_04->fields).Animation, pMVar18 == (MVRuntimeDataVariable *)0x0))
      goto code_?;
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                (pMVar18,(Object *)pDVar15,(MethodInfo *)0x0);
      (this->fields).speedState = 0;
    }
  }
  this_02 = (this->fields).wheel;
  if (this_02 != (GameObject *)0x0) {
    this_08 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_02,(MethodInfo *)0x0);
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_08 != (Transform *)0x0) {
      axis.z = VStack_9.z;
      axis.x = VStack_8.y;
      axis.y = VStack_8.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                (this_08,axis,(float)((uint)fStack_12 ^ _UNK_?) * fVar5 * _UNK_?,
                 Space__Enum_World,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void <Init>m__0(Object) */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization__Init_m__0
               (HamsterWheelVisualization *this,Object *healthVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  healthVal = extraout_ECX;
  pSVar1 = extraout_EDX;
code_?:
  func_?(healthVal,pSVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Init>m__1(Object) */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization__Init_m__1
               (HamsterWheelVisualization *this,Object *val,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (val != (Object *)0x0) {
    pBVar1 = TypeInfo__System__Boolean;
    if ((val->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar2 = (char *)func_?(val);
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
  func_?(0);
  val = extraout_ECX;
  pBVar1 = extraout_EDX;
code_?:
  func_?(val,pBVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* HamsterWheelVisualization() */

void Assembly-CSharp.dll::HamsterWheelVisualization::HamsterWheelVisualization__ctor
               (HamsterWheelVisualization *this,MethodInfo *method)

{
  (this->fields).vehicleAboutToBeRemovedTime = 3.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
            );
  (this->fields)._.lodGameObjects = (List_1_UnityEngine_GameObject_ *)this_00;
  (this->fields)._.disableVisualizationDistance = 40.0;
  (this->fields)._.cullDistance = 145.0;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

