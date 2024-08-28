
/* Void AddImpulse(MVPlayer, Vector3, Boolean) */

void Assembly-CSharp.dll::MVRigidBody::MVRigidBody_AddImpulse
               (MVRigidBody *this,MVPlayer *shooter,Vector3 impulse,bool suspendImpactDamage,
               MethodInfo *method)

{
  if (shooter != (MVPlayer *)0x0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
       pMVar2 == (MVLocalPlayer *)0x0)) goto code_?;
    bVar3 = MVPlayer::MVPlayer_IsOnSameTeam((MVPlayer *)pMVar2,shooter,(MethodInfo *)0x0);
    if (bVar3 != 0) {
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
    func_?();
    cRam_? = '\x01';
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  pMVar4 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if (bVar3 != 0) {
    if ((this->fields).impulseVectors == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    func_?();
    suspendImpactDamage = (bool)pMVar4;
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
    func_?();
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pLVar2 = (this->fields).impulseVectors;
    if (pLVar2 == (List_1_UnityEngine_Vector3_ *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    func_?(pLVar2,impulse._0_8_,impulse.z,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    if (suspendImpactDamage != 0) {
      (*(code *)(this->klass->vtable).__unknown_4.method)(this,this->klass[1]._0.image);
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
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->upVector).x;
  uVar3 = (pVVar1->upVector).y;
  fVar4 = (pVVar1->upVector).z;
  fVar5 = (float)uVar3 * hVelocity.z - fVar4 * hVelocity.y;
  fVar6 = fVar4 * hVelocity.x - (float)uVar2 * hVelocity.z;
  fVar4 = (float)uVar2 * hVelocity.y - (float)uVar3 * hVelocity.x;
  value.y = groundNormal.x * fVar4 - groundNormal.z * fVar5;
  value.x = groundNormal.z * fVar6 - groundNormal.y * fVar4;
  value.z = groundNormal.y * fVar5 - groundNormal.x * fVar6;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)auStack_8,value,(MethodInfo *)0x0);
  auStack_8._8_4_ = pVVar7->x;
  fStack_9 = pVVar7->y;
  fStack_10 = pVVar7->z;
  if (cRam_? == '\0') {
    auStack_8._0_4_ = &TypeInfo__System__Math;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    auStack_8._0_4_ = TypeInfo__System__Math;
    func_?();
  }
  dVar11 = (double)(hVelocity.x * hVelocity.x + hVelocity.y * hVelocity.y + hVelocity.z * hVelocity.z
                  );
  if (dVar11 < 0.0) {
    auStack_8._0_4_ = &UNK_?;
    func_?();
  }
  else {
    dVar11 = SQRT(dVar11);
  }
  fVar4 = (float)dVar11;
  __return_storage_ptr__->x = (float)auStack_8._8_4_ * fVar4;
  __return_storage_ptr__->y = fStack_9 * fVar4;
  __return_storage_ptr__->z = fStack_10 * fVar4;
  return __return_storage_ptr__;
}


/* Vector3 ApplyGravity(Vector3, Vector3, MVInteractableBase) */

Vector3 * Assembly-CSharp.dll::MVRigidBody::MVRigidBody_ApplyGravity
                    (Vector3 *__return_storage_ptr__,MVRigidBody *this,Vector3 velocity,
                    Vector3 velocityPrevFrame,MVInteractableBase *interactableLocal,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPhysics);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPhysics);
  }
  pMVar1 = TypeInfo__MVPhysics->static_fields;
  iVar2 = (pMVar1->gravity).currentCryptoKey;
  AVar3 = (pMVar1->gravity).hiddenValue;
  pBVar4 = (pMVar1->gravity).hiddenValueOld;
  fVar5 = (pMVar1->gravity).fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
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
    pIVar6 = (interactableLocal->klass->vtable).__unknown_7.methodPtr;
    fVar7 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_6.method)
                               (interactableLocal,0,(this->fields).density);
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    __return_storage_ptr__->x = velocity.x;
    __return_storage_ptr__->y = velocityPrevFrame.y - fVar5 * (float)fVar7 * (float)pIVar6;
    __return_storage_ptr__->z = velocity.z;
    return __return_storage_ptr__;
  }
  func_?();
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
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar6 = (this->fields).impulseVectors;
  if (pLVar6 != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((pLVar6->fields)._size == 0) {
      __return_storage_ptr__->x = (float)(int)velocity._0_8_;
      __return_storage_ptr__->y = (float)(int)((ulonglong)velocity._0_8_ >> 0x20);
      __return_storage_ptr__->z = velocity.z;
      *unaff_FS_OFFSET = uStack_3;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_8._0_4_ = (pVVar7->zeroVector).x;
    uStack_8._4_4_ = (pVVar7->zeroVector).y;
    pVStack_9 = (VisualTreeAsset *)(pVVar7->zeroVector).z;
    method_00 = (MethodInfo *)(this->fields).impulseVectors;
    if (method_00 != (MethodInfo *)0x0) {
      pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                         (&LStack_11,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)method_00,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                         );
      uStack_12 = 0;
      auStack_13._0_4_ = pLVar10->_list;
      auStack_13._4_4_ = pLVar10->_index;
      auStack_13._8_4_ = pLVar10->_version;
      auStack_13._12_4_ = (pLVar10->_current).alias;
      auStack_13._16_8_ = *(undefined8 *)&(pLVar10->_current).path;
      uStack_1 = 1;
      pOStack_14 = (Object *)auStack_13;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::
                List`1[T]+Enumerator[AnimatedTextureOffset+TextureOffsetAnimationData]::
                List_1_T_Enumerator_AnimatedTextureOffset_TextureOffsetAnimationData__MoveNext
                          ((List_1_T_Enumerator_AnimatedTextureOffset_TextureOffsetAnimationData_ *)
                           auStack_13,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        if (bVar15 == 0) break;
        LStack_11._current.asset = (VisualTreeAsset *)((float)pVStack_9 + (float)auStack_13._20_4_)
        ;
        uStack_8 = CONCAT44(uStack_8._4_4_ + (float)auStack_13._16_4_,
                             (float)uStack_8 + (float)auStack_13._12_4_);
        pVStack_9 = LStack_11._current.asset;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)auStack_13,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      if (interactableLocal != (MVInteractableBase *)0x0) {
        fVar16 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_6.method)
                                    (interactableLocal,1,(this->fields).weight,
                                     (interactableLocal->klass->vtable).__unknown_7.methodPtr);
        fVar17 = (float)((float10)_UNK_? / fVar16);
        pLVar6 = (this->fields).impulseVectors;
        if (pLVar6 != (List_1_UnityEngine_Vector3_ *)0x0) {
          piVar18 = &(pLVar6->fields)._version;
          *piVar18 = *piVar18 + 1;
          (pLVar6->fields)._size = 0;
          __return_storage_ptr__->x = velocity.x + (float)uStack_8 * fVar17;
          __return_storage_ptr__->y = velocity.y + uStack_8._4_4_ * fVar17;
          __return_storage_ptr__->z = velocity.z + (float)pVStack_9 * fVar17;
          *unaff_FS_OFFSET = uStack_3;
          return __return_storage_ptr__;
        }
      }
    }
  }
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  pVVar21 = (Vector3 *)(*pcVar20)();
  return pVVar21;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVRigidBody::MVRigidBody_Reset(MVRigidBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).impulseVectors;
  if (pLVar2 != (List_1_UnityEngine_Vector3_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar2->fields)._size = 0;
    return;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Vector3 VelocityDamping(Vector3, Single, MVInteractableBase) */

Vector3 * Assembly-CSharp.dll::MVRigidBody::MVRigidBody_VelocityDamping
                    (Vector3 *__return_storage_ptr__,Vector3 velocity,float defaultDampning,
                    MVInteractableBase *interactableLocal,MethodInfo *method)

{
  if (interactableLocal != (MVInteractableBase *)0x0) {
    fVar1 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_6.method)
                               (interactableLocal,4,0x3f800000,
                                (interactableLocal->klass->vtable).__unknown_7.methodPtr);
    fVar2 = (float)fVar1;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    fVar3 = fVar3 / _UNK_?;
    __return_storage_ptr__->x = velocity.x - (velocity.x - velocity.x * fVar2) * fVar3;
    __return_storage_ptr__->y = velocity.y - (velocity.y - velocity.y * fVar2) * fVar3;
    __return_storage_ptr__->z = velocity.z - (velocity.z - velocity.z * fVar2) * fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* MVRigidBody() */

void Assembly-CSharp.dll::MVRigidBody::MVRigidBody__ctor(MVRigidBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__MVGroundState);
    cRam_? = '\x01';
  }
  value = (MVGroundState *)func_?(TypeInfo__MVGroundState);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVMaterial);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  this_00 = (MVMaterial *)func_?(TypeInfo__MVMaterial);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0);
  (value->fields).groundMaterial = this_00;
  func_?(&value->fields,this_00);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit((ObscuredBool *)&stack0xfffffff0,0,(MethodInfo *)0x0);
  uVar2 = *(undefined3 *)&pOVar1->field_0x1;
  iVar3 = pOVar1->hiddenValue;
  bVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->fakeValueChanged;
  bVar6 = pOVar1->inited;
  uVar7 = pOVar1->field_0xb;
  (value->fields).grounded.currentCryptoKey = pOVar1->currentCryptoKey;
  *(undefined3 *)&(value->fields).grounded.field_0x1 = uVar2;
  (value->fields).grounded.hiddenValue = iVar3;
  (value->fields).grounded.fakeValue = bVar4;
  (value->fields).grounded.fakeValueChanged = bVar5;
  (value->fields).grounded.inited = bVar6;
  (value->fields).grounded.field_0xb = uVar7;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar8->zeroVector).y;
  fVar10 = (pVVar8->zeroVector).z;
  (value->fields).groundNormal.x = (pVVar8->zeroVector).x;
  (value->fields).groundNormal.y = fVar9;
  (value->fields).groundNormal.z = fVar10;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,in_stack_11);
  (this->fields).groundState = value;
  func_?();
  (this->fields).weight = 1.0;
  (this->fields).density = 1.0;
  (this->fields).isPlayerControlled = 1;
  this_01 = (List_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  ppLVar12 = &(this->fields).impulseVectors;
  *ppLVar12 = this_01;
  func_?(ppLVar12,this_01);
  (this->fields)._.findWorldObjectParent = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

