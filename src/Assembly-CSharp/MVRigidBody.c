
/* Void AddImpulse(MVPlayer, Vector3, Boolean) */

void Assembly-CSharp.dll::MVRigidBody::MVRigidBody_AddImpulse
               (MVRigidBody *this,MVPlayer *shooter,Vector3 impulse,bool suspendImpactDamage,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (shooter != (MVPlayer *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
       pMVar2 == (MVLocalPlayer *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), this_01 == (SkyParam *)0x0)
       ) goto code_?;
    iVar3 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_01,(MethodInfo *)0x0);
    if ((1 < iVar3) && ((pMVar2->fields)._.team == (shooter->fields).team)) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         pMVar2 == (MVLocalPlayer *)0x0)) goto code_?;
      if ((pMVar2->fields)._._ActorNr_k__BackingField != (shooter->fields)._ActorNr_k__BackingField)
      {
        return;
      }
    }
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              (this->fields).impulseVectors;
    if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
code_?:
      func_?(0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              (this_00,(UnitySynchronizationContext_WorkRequest)impulse,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    if (suspendImpactDamage != 0) {
      (*(code *)(this->klass->vtable).__unknown_4.method)();
    }
  }
  return;
}


/* Void AddImpulse(Vector3, Boolean) */

void Assembly-CSharp.dll::MVRigidBody::MVRigidBody_AddImpulse_1
               (MVRigidBody *this,Vector3 impulse,bool suspendImpactDamage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              (this->fields).impulseVectors;
    if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              (this_00,(UnitySynchronizationContext_WorkRequest)impulse,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    if (suspendImpactDamage != 0) {
      (*(code *)(this->klass->vtable).__unknown_4.method)();
    }
  }
  return;
}


/* Vector3 AdjustGroundVelocityToNormal(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                    (Vector3 *__return_storage_ptr__,Vector3 hVelocity,Vector3 groundNormal,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                     ((Vector3 *)&stack0xfffffff0,*pVVar1,hVelocity,(MethodInfo *)0x0);
  rhs.z = groundNormal.z;
  rhs.x = groundNormal.x;
  rhs.y = groundNormal.y;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
            (&groundNormal,*pVVar1,rhs,(MethodInfo *)0x0);
  puVar2 = (undefined8 *)func_?();
  fVar3 = *(float *)(puVar2 + 1);
  fVar4 = (float)*puVar2;
  fVar5 = (float)((ulonglong)*puVar2 >> 0x20);
  fVar6 = (float10)func_?();
  groundNormal.y = fVar5;
  groundNormal.x = fVar4;
  a.z = fVar3;
  a.x = fVar4;
  a.y = fVar5;
  groundNormal.z = fVar3;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&groundNormal,a,(float)fVar6,(MethodInfo *)0x0);
  uRam_?._0_4_ = pVVar1->x;
  uRam_?._4_4_ = pVVar1->y;
  fRam00000008 = pVVar1->z;
  return (Vector3 *)0x0;
}


/* Vector3 ApplyGravity(Vector3, Vector3, MVInteractableBase) */

Vector3 * Assembly-CSharp.dll::MVRigidBody::MVRigidBody_ApplyGravity
                    (Vector3 *__return_storage_ptr__,MVRigidBody *this,Vector3 velocity,
                    Vector3 velocityPrevFrame,MVInteractableBase *interactableLocal,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVPhysics);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVPhysics);
  }
  pMVar1 = TypeInfo__MVPhysics->static_fields;
  iVar2 = (pMVar1->gravity).currentCryptoKey;
  AVar3 = (pMVar1->gravity).hiddenValue;
  pBVar4 = (pMVar1->gravity).hiddenValueOld;
  fVar5 = (pMVar1->gravity).fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AVar3;
  value.currentCryptoKey = iVar2;
  value.hiddenValueOld = pBVar4;
  value.fakeValue = fVar5;
  value.inited = (pMVar1->gravity).inited;
  value._17_3_ = *(undefined3 *)&(pMVar1->gravity).field_0x11;
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if (interactableLocal != (MVInteractableBase *)0x0) {
    pIVar6 = (interactableLocal->klass->vtable).__unknown_6.methodPtr;
    fVar7 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)
                               (interactableLocal,0,(this->fields).density);
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    __return_storage_ptr__->x = velocity.x;
    __return_storage_ptr__->y = velocityPrevFrame.y - fVar5 * (float)fVar7 * (float)pIVar6;
    __return_storage_ptr__->z = velocity.z;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Vector3 GetImpulse(Vector3, MVInteractableBase) */

Vector3 * Assembly-CSharp.dll::MVRigidBody::MVRigidBody_GetImpulse
                    (Vector3 *__return_storage_ptr__,MVRigidBody *this,Vector3 velocity,
                    MVInteractableBase *interactableLocal,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff7c;
  puVar5 = &stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  IStack_6.klass = (InputToPlayerMovementAndroid__Class *)0x0;
  IStack_6.monitor = (MonitorData *)0x0;
  IStack_6.fields.jump = 0;
  IStack_6.fields.jumpFrameUpdate = 0;
  IStack_6.fields.jumpFixedUpdate = 0;
  IStack_6.fields._3_1_ = 0;
  IStack_6.fields.direction.x = 0.0;
  IStack_6.fields.direction.y = 0.0;
  IStack_6.fields.direction.z = 0.0;
  func_?();
  pLVar7 = (this->fields).impulseVectors;
  puStack_8 = (undefined4 *)&stack0xffffff7c;
  puStack_4 = &stack0xffffff7c;
  if (pLVar7 != (List_1_UnityEngine_Vector3_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffff7c;
    puStack_4 = &stack0xffffff7c;
    pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                       );
    if (pOVar9 == (Object *)0x0) {
      __return_storage_ptr__->x = velocity.x;
      __return_storage_ptr__->y = velocity.y;
      __return_storage_ptr__->z = velocity.z;
      *unaff_FS_OFFSET = uStack_3;
      return __return_storage_ptr__;
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_11,(MethodInfo *)0x0);
    VStack_12.x = pVVar10->x;
    VStack_12.y = pVVar10->y;
    fVar13 = pVVar10->z;
    pLVar7 = (this->fields).impulseVectors;
    VStack_12.z = fVar13;
    VStack_14._0_8_ = VStack_12._0_8_;
    if (pLVar7 != (List_1_UnityEngine_Vector3_ *)0x0) {
      pLVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UICharInfo]::
               List_1_UnityEngine_UICharInfo__GetEnumerator
                         (&LStack_16,(List_1_UnityEngine_UICharInfo_ *)pLVar7,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                         );
      IStack_6.klass = (InputToPlayerMovementAndroid__Class *)pLVar15->l;
      IStack_6.monitor = (MonitorData *)pLVar15->next;
      IStack_6.fields._0_4_ = pLVar15->ver;
      IStack_6.fields.direction.x = (pLVar15->current).cursorPos.x;
      IStack_6.fields.direction._4_8_ = *(undefined8 *)&(pLVar15->current).cursorPos.y;
      uStack_1 = 0;
      while (cVar17 = func_?(), cVar17 != '\0') {
        pVVar10 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                           (&VStack_18,&IStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                           );
        VStack_11.y = pVVar10->x;
        VStack_11.z = pVVar10->y;
        fVar19 = pVVar10->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = fVar13;
        a.x = VStack_14.x;
        a.y = VStack_14.y;
        b.z = fVar19;
        b.x = VStack_11.y;
        b.y = VStack_11.z;
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&LStack_16.current,a,b,(MethodInfo *)0x0);
        VStack_12.x = pVVar10->x;
        VStack_12.y = pVVar10->y;
        fVar13 = pVVar10->z;
        VStack_12.z = fVar13;
        VStack_14._0_8_ = VStack_12._0_8_;
      }
      *puStack_8 = 0x58;
      uStack_1 = 0xffffffff;
      func_?(&IStack_6,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                     );
      if (interactableLocal != (MVInteractableBase *)0x0) {
        fVar20 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)
                                    (interactableLocal,1,(this->fields).weight,
                                     (interactableLocal->klass->vtable).__unknown_6.methodPtr);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a_00.z = fVar13;
        a_00.x = VStack_14.x;
        a_00.y = VStack_14.y;
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&LStack_16.current,a_00,_UNK_? / (float)fVar20,
                            (MethodInfo *)0x0);
        VStack_11.y = pVVar10->x;
        VStack_11.z = pVVar10->y;
        fVar13 = pVVar10->z;
        this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).impulseVectors;
        if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__Clear
                    (this_00,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
          b_00.z = fVar13;
          b_00.x = VStack_11.y;
          b_00.y = VStack_11.z;
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             (&VStack_12,velocity,b_00,(MethodInfo *)0x0);
          fVar19 = pVVar10->y;
          fVar13 = pVVar10->z;
          __return_storage_ptr__->x = pVVar10->x;
          __return_storage_ptr__->y = fVar19;
          __return_storage_ptr__->z = fVar13;
          *unaff_FS_OFFSET = uStack_3;
          return __return_storage_ptr__;
        }
      }
    }
  }
  func_?(0);
  pcVar21 = (code *)swi(3);
  pVVar10 = (Vector3 *)(*pcVar21)();
  return pVVar10;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVRigidBody::MVRigidBody_Reset(MVRigidBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).impulseVectors;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Vector3 VelocityDamping(Vector3, Single, MVInteractableBase) */

Vector3 * Assembly-CSharp.dll::MVRigidBody::MVRigidBody_VelocityDamping
                    (Vector3 *__return_storage_ptr__,Vector3 velocity,float defaultDampning,
                    MVInteractableBase *interactableLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (interactableLocal != (MVInteractableBase *)0x0) {
    fVar1 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)
                               (interactableLocal,4,0x3f800000,
                                (interactableLocal->klass->vtable).__unknown_6.methodPtr);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                       ((Vector3 *)&stack0xfffffff0,(float)fVar1,velocity,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffe4,velocity,*pVVar2,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    VVar6 = *pVVar2;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe4,VVar6,fVar7 / _UNK_?,(MethodInfo *)0x0);
    VVar6.y = fVar5;
    VVar6.x = (float)uVar4;
    VVar6.z = velocity.z;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffe4,VVar6,*pVVar2,(MethodInfo *)0x0);
    fVar5 = pVVar2->z;
    *(undefined8 *)uVar3 = *(undefined8 *)pVVar2;
    *(float *)(uVar3 + 8) = fVar5;
    return (Vector3 *)uVar3;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar8)();
  return pVVar2;
}


/* MVRigidBody() */

void Assembly-CSharp.dll::MVRigidBody::MVRigidBody__ctor(MVRigidBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (MVGroundState *)func_?(TypeInfo__MVGroundState);
  MVGroundState::MVGroundState__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).groundState = this_00;
  (this->fields).weight = 1.0;
  (this->fields).density = 1.0;
  (this->fields).isPlayerControlled = 1;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  (this->fields).impulseVectors = (List_1_UnityEngine_Vector3_ *)this_01;
  MVComponent::MVComponent__ctor((MVComponent *)this,(MethodInfo *)0x0);
  return;
}

