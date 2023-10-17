
/* Void ApplyDamage(MVWorldObjectClient, InteractionDataHandlerBase) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_ApplyDamage
               (MVSentryGun *this,MVWorldObjectClient *wo,
               InteractionDataHandlerBase *interactionDataHandlerBase,MethodInfo *method)

{
  uVar1 = (this->fields).beamType;
  if (wo == (MVWorldObjectClient *)0x0) goto code_?;
  puVar2 = (undefined8 *)
           (*(wo->klass->vtable).GetTargetPosition.methodPtr)
                     (auStack_3 + 8,wo,(wo->klass->vtable).GetTargetPosition.method);
  auStack_4._8_8_ = *puVar2;
  auStack_4._16_4_ = *(undefined4 *)(puVar2 + 1);
  this_00 = (this->fields)._._.gameObject;
  if (this_00 == (GameObject *)0x0) goto code_?;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0);
  if (this_01 == (Transform *)0x0) goto code_?;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)&IStack_6.impulse.y,this_01,(MethodInfo *)0x0);
  uVar7 = pVVar5->x;
  uVar8 = pVVar5->y;
  auStack_3._16_4_ = (float)auStack_4._16_4_ - pVVar5->z;
  auStack_3._12_4_ = (float)auStack_4._12_4_ - (float)uVar8;
  auStack_3._8_4_ = (float)auStack_4._8_4_ - (float)uVar7;
  auStack_4._16_4_ = auStack_3._16_4_;
  puVar2 = (undefined8 *)func_?(&IStack_6.impulse.y,auStack_3 + 8,0);
  auStack_4._16_4_ = (this->fields).pushBackStrength;
  auStack_3._8_8_ = *puVar2;
  auStack_3._16_4_ = *(undefined4 *)(puVar2 + 1);
  auStack_4._8_4_ = (float)auStack_3._8_4_ * (float)auStack_4._16_4_;
  auStack_4._12_4_ = (float)auStack_3._12_4_ * (float)auStack_4._16_4_;
  auStack_4._16_4_ = (float)auStack_3._16_4_ * (float)auStack_4._16_4_;
  if (uVar1 == 0) {
    pIVar9 = &IStack_6;
code_?:
    impulse_00.y = (float)auStack_4._12_4_;
    impulse_00.x = (float)auStack_4._8_4_;
    impulse_00.z = (float)auStack_4._16_4_;
    pIVar9 = SentryTowerFirePackage::SentryTowerFirePackage_Create
                       (pIVar9,impulse_00,(MethodInfo *)0x0);
  }
  else {
    if (uVar1 != 1) {
      pIVar9 = (InteractionData *)auStack_4;
      goto code_?;
    }
    impulse.y = (float)auStack_4._12_4_;
    impulse.x = (float)auStack_4._8_4_;
    impulse.z = (float)auStack_4._16_4_;
    pIVar9 = SentryTowerIcePackage::SentryTowerIcePackage_Create
                       ((InteractionData *)auStack_3,impulse,(MethodInfo *)0x0);
  }
  if (interactionDataHandlerBase != (InteractionDataHandlerBase *)0x0) {
    InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
              (interactionDataHandlerBase,*pIVar9,1,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* InteractionData BeamTypeToInteractionPackageType(SentryGunBeamType, Vector3) */

InteractionData *
Assembly-CSharp.dll::MVSentryGun::MVSentryGun_BeamTypeToInteractionPackageType
          (InteractionData *__return_storage_ptr__,SentryGunBeamType__Enum btype,Vector3 impulse,
          MethodInfo *method)

{
  if (((undefined1)btype == SentryGunBeamType__Enum_FireBeam) ||
     ((undefined1)btype != SentryGunBeamType__Enum_IceBeam)) {
    pIVar1 = SentryTowerFirePackage::SentryTowerFirePackage_Create
                       (&IStack_2,impulse,(MethodInfo *)0x0);
  }
  else {
    pIVar1 = SentryTowerIcePackage::SentryTowerIcePackage_Create
                       (&IStack_2,impulse,(MethodInfo *)0x0);
  }
  fVar3 = (pIVar1->impulse).x;
  fVar4 = (pIVar1->impulse).y;
  fVar5 = (pIVar1->impulse).z;
  uVar6 = pIVar1->interactionType;
  uVar7 = pIVar1->playerKilledByType;
  uVar8 = *(undefined2 *)&pIVar1->field_0x12;
  __return_storage_ptr__->damage = pIVar1->damage;
  (__return_storage_ptr__->impulse).x = fVar3;
  (__return_storage_ptr__->impulse).y = fVar4;
  (__return_storage_ptr__->impulse).z = fVar5;
  __return_storage_ptr__->interactionType = uVar6;
  __return_storage_ptr__->playerKilledByType = uVar7;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar8;
  return __return_storage_ptr__;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_CompareWithKoGaMaPackage
               (MVSentryGun *this,MVWorldObjectClient *wo,KoGaMaPackageClient *koGaMaPackageClient,
               int32_t *insertedBy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__MVSentryGun);
    func_?(&TypeInfo__SentryGunBeamType);
    func_?(&StringLiteral_beamType);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar1,(Object *)StringLiteral_beamType,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__SentryGunBeamType,pOVar2);
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__SentryGunBeamType->_0).element_class)
      goto code_?;
      pcVar4 = (char *)func_?(pOVar2);
      cVar5 = *pcVar4;
      if (wo != (MVWorldObjectClient *)0x0) {
        if (((TypeInfo__MVSentryGun->_1).typeHierarchyDepth <= (wo->klass->_1).typeHierarchyDepth)
           && ((MVSentryGun__Class *)
               (wo->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).typeHierarchyDepth - 1] ==
               TypeInfo__MVSentryGun)) {
          pMVar6 = (MVWorldObjectClient *)0x0;
          if ((MVSentryGun__Class *)
              (wo->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).typeHierarchyDepth - 1] ==
              TypeInfo__MVSentryGun) {
            pMVar6 = wo;
          }
          pDVar1 = (pMVar6->fields)._.data;
          if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar1,(Object *)StringLiteral_beamType,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            uVar3 = CONCAT44(TypeInfo__SentryGunBeamType,pOVar2);
            if (pOVar2 != (Object *)0x0) {
              if ((pOVar2->klass->_0).element_class ==
                  (TypeInfo__SentryGunBeamType->_0).element_class) {
                pcVar4 = (char *)func_?();
                return *pcVar4 == cVar5;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DeSelect(MVSentryGun *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Destroy(MVSentryGun *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    func_?(&(this->fields)._.cullingSubscriberBase,0);
  }
  return;
}


/* Void DoFrameDelete() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DoFrameDelete
               (MVSentryGun *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).woIdsBeamsMap;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffa0,(Dictionary_2_System_Object_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                       );
    uVar5 = *(undefined8 *)&(pDVar4->_current).value;
    uStack_1 = 1;
    pMVar6 = (MethodInfo *)(pDVar4->_current).key;
code_?:
    id = pMVar6;
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Int32Enum,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                      ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                       &stack0xffffff88,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                      );
    if (bVar7 != 0) {
      x = (Object_1 *)uVar5;
      pMVar6 = id;
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,(int32_t)id,(MethodInfo *)0x0);
        if (pMVar8 == (MVWorldObject *)0x0) {
code_?:
          pLVar9 = (this->fields).deleteList;
          if (pLVar9 != (List_1_System_Int32_ *)0x0) goto code_?;
        }
        else {
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          method_00 = (MethodInfo *)&UNK_?;
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            (x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 != 0) goto code_?;
          pLVar10 = pMVar8[1].fields.objectLinkRefs;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pLVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 != 0) goto code_?;
          pLVar10 = pMVar8[1].fields.objectLinkRefs;
          pGVar11 = (this->fields)._._.gameObject;
          if (((pGVar11 != (GameObject *)0x0) &&
              (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar11,(MethodInfo *)0x0),
              pTVar12 != (Transform *)0x0)) &&
             (pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffc4,pTVar12,(MethodInfo *)0x0),
             pLVar10 != (List_1_MV_WorldObject_ObjectLink_ *)0x0)) {
            uVar5._4_4_ = (int32_t)pLVar10;
            uVar5._0_4_ = (Object *)&stack0xffffffb8;
            pMVar6 = (MethodInfo *)&UNK_?;
            UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_ClosestPointOnBounds
                      ((Vector3 *)&stack0xffffffb8,(Collider *)pLVar10,*pVVar13,(MethodInfo *)0x0);
            pGVar11 = (this->fields)._._.gameObject;
            if (pGVar11 != (GameObject *)0x0) {
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar11,(MethodInfo *)0x0);
              if (pTVar12 != (Transform *)0x0) goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffff88,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pLVar9 = (this->fields).deleteList;
    if (pLVar9 == (List_1_System_Int32_ *)0x0) goto code_?;
    iVar14 = (pLVar9->fields)._size;
    index = 0;
    if (0 < iVar14) {
      do {
        this_00 = (this->fields).woIdsBeamsMap;
        this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).deleteList;
        if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (key = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
           this_00 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                  );
        index = index + 1;
      } while (index < iVar14);
    }
    pLVar9 = (this->fields).deleteList;
    if (pLVar9 != (List_1_System_Int32_ *)0x0) {
      piVar15 = &(pLVar9->fields)._version;
      *piVar15 = *piVar15 + 1;
      (pLVar9->fields)._size = 0;
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
            ((Vector3 *)&stack0xffffffac,pTVar12,(MethodInfo *)0x0);
  fVar18 = (float10)func_?();
  pfVar19 = &(this->fields).laserRange;
  if (*pfVar19 <= (float)fVar18 && (float)fVar18 != *pfVar19) {
code_?:
    pLVar9 = (this->fields).deleteList;
    if (pLVar9 == (List_1_System_Int32_ *)0x0) goto code_?;
code_?:
    func_?(pLVar9,id,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    method_00 = id;
  }
  goto code_?;
}


/* Boolean DoRespawn() */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DoRespawn(MVSentryGun *this,MethodInfo *method)

{
  if ((this->fields).wasDead != 0) {
    this_00 = (this->fields).interactable;
    if (this_00 == (ClientSideNPCInteractable *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    bVar2 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      (this->fields).wasDead = 0;
      return 1;
    }
  }
  return 0;
}


/* Boolean HitsTarget(Ray, Int32) */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_HitsTarget
               (MVSentryGun *this,Ray ray,int32_t woID,MethodInfo *method)

{
  func_?(&VStack_1,0,0x48);
  bVar2 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,&VStack_1,(this->fields).laserRange,
                     (this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField,-5,
                     (MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 1;
  }
  return VStack_1.woId == woID;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Initialize(MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&
                    ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                   );
    func_?(&
                    ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                   );
    func_?(&
                    MethodInfo__MVSentryGun__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&MethodInfo__MVSentryGun__OnStateChange_UnityEngine__CullingGroupEvent_);
    func_?(&
                    MethodInfo__MVSentryGun__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                     ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                      (Action_2_LogicInputState_LogicObjectManager_ *)0x0,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar1);
  pGVar2 = (this->fields)._._.gameObject;
  if (pGVar2 != (GameObject *)0x0) {
    pCVar3 = (ClientSideNPCInteractable *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar2,
                        ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                       );
    (this->fields).interactable = pCVar3;
    func_?();
    pCVar3 = (this->fields).interactable;
    this_01 = (Action_3_Single_Object_ByteEnum_ *)func_?();
    if ((this_01 != (Action_3_Single_Object_ByteEnum_ *)0x0) &&
       (mscorlib.dll::System::Action`3[Single,Object,ByteEnum]::
        Action_3_Single_Object_ByteEnum___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVSentryGun__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                   ,(MethodInfo *)0x0), pCVar3 != (ClientSideNPCInteractable *)0x0)) {
      ClientSideNPCInteractable::ClientSideNPCInteractable_Init
                (pCVar3,(Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)this_01,
                 (MethodInfo *)0x0);
      MVSentryGun_InitializeCommon(this,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._._.gameObject;
      if ((pGVar2 != (GameObject *)0x0) &&
         (this_02 = (MVComponent *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar2,
                               ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                              ), this_02 != (MVComponent *)0x0)) {
        MVComponent::MVComponent_FindWorldObjectParent(this_02,(MethodInfo *)0x0);
        pCVar3 = (this->fields).interactable;
        if (pCVar3 != (ClientSideNPCInteractable *)0x0) {
          bVar4 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead
                            (pCVar3,(MethodInfo *)0x0);
          (this->fields).wasDead = bVar4;
          MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
          pUVar5 = (this->fields)._._.PositionChanged;
          this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          if (this_03 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_03,(Object *)this,
                       MethodInfo__MVSentryGun__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                       ,(MethodInfo *)0x0);
            pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pUVar5,(Delegate *)this_03,(MethodInfo *)0x0);
            if (pDVar6 == (Delegate *)0x0) {
              (this->fields)._._.PositionChanged =
                   (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
            }
            else {
              pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                        func_?();
              if (pUVar5 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
              goto code_?;
              (this->fields)._._.PositionChanged = pUVar5;
              iVar7 = func_?();
              if (iVar7 == 0) goto code_?;
            }
            func_?();
            iVar7 = (*(this->klass->vtable).get_WorldPosition_1.methodPtr)();
            fVar8 = *(float *)(iVar7 + 8);
            this_04 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
            if (this_04 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
              UnityAction_1_UnityEngine_Vector2___ctor
                        (this_04,(Object *)this,
                         MethodInfo__MVSentryGun__OnStateChange_UnityEngine__CullingGroupEvent_,
                         (MethodInfo *)0x0);
              pCVar9 = TypeInfo__CullingSubscriberBase;
              pCVar10 = (CullingSubscriberBase *)func_?();
              if (pCVar10 != (CullingSubscriberBase *)0x0) {
                position.y = (float)&UNK_?;
                position.x = (float)pCVar9;
                position.z = fVar8;
                CullingSubscriberBase::CullingSubscriberBase__ctor_2
                          (pCVar10,2.0,position,
                           (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_04,(MethodInfo *)0x0
                          );
                (this->fields)._.cullingSubscriberBase = pCVar10;
                func_?();
                pCVar10 = (this->fields)._.cullingSubscriberBase;
                if (pCVar10 != (CullingSubscriberBase *)0x0) {
                  (pCVar10->fields)._DistanceBandIndex_k__BackingField = 3;
                  pMVar11 = (this->fields).gunObject;
                  if (pMVar11 != (MVSentryGunObject *)0x0) {
                    pSVar12 = (pMVar11->fields).sentryGunScript;
                    fVar8 = (this->fields).laserRange;
                    if (pSVar12 != (SentryGunScript *)0x0) {
                      MVar13 = MVGameControllerBase::MVGameControllerBase_get_GameMode
                                         ((MethodInfo *)0x0);
                      if (MVar13 != MVGameMode__Enum_Edit) {
                        return;
                      }
                      this_00 = (pSVar12->fields).rangeVisualization;
                      if (this_00 != (SphereVolumeIndicator *)0x0) {
                        SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                                  (this_00,fVar8,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_InitializeCommon
               (MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__SentryGunBeamType);
    func_?(&StringLiteral_beamType);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_beamType,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
code_?:
      pMVar2 = (this->fields).gunObject;
      if ((pMVar2 != (MVSentryGunObject *)0x0) &&
         (pSVar3 = (pMVar2->fields).sentryGunScript, pSVar3 != (SentryGunScript *)0x0)) {
        uVar4 = (this->fields).beamType;
        if (cRam_? == '\0') {
          func_?(&StringLiteral__TintColor);
          func_?(&StringLiteral__Color);
          cRam_? = '\x01';
        }
        if (uVar4 == 0) {
          pMVar5 = (pSVar3->fields).sentryRenderer;
          if (pMVar5 != (MeshRenderer *)0x0) {
            pMVar6 = (pSVar3->fields).materialFireBeam;
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      ((Renderer *)pMVar5,pMVar6,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        else if (uVar4 == 1) {
          pMVar5 = (pSVar3->fields).sentryRenderer;
          if (pMVar5 != (MeshRenderer *)0x0) {
            pMVar6 = (pSVar3->fields).materialIceBeam;
            goto code_?;
          }
        }
        else {
code_?:
          pMVar5 = (pSVar3->fields).sentryRenderer;
          if (pMVar5 != (MeshRenderer *)0x0) {
            pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                                ((Renderer *)pMVar5,(MethodInfo *)0x0);
            if (pMVar6 != (Material *)0x0) {
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                                  ((Vector4 *)&stack0xffffffec,pMVar6,StringLiteral__Color,
                                   (MethodInfo *)0x0);
              fVar8 = pVVar7->y;
              fVar9 = pVVar7->z;
              fVar10 = pVVar7->w;
              this_02 = (pSVar3->fields).glowPlaneRenderer;
              (pSVar3->fields).color.r = pVVar7->x;
              (pSVar3->fields).color.g = fVar8;
              (pSVar3->fields).color.b = fVar9;
              (pSVar3->fields).color.a = fVar10;
              if (this_02 != (Renderer *)0x0) {
                pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                    (this_02,(MethodInfo *)0x0);
                if (pMVar6 != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                            (pMVar6,StringLiteral__TintColor,(Vector4)(pSVar3->fields).color,
                             (MethodInfo *)0x0);
                  if (uVar4 == 0) {
                    this_03 = (pSVar3->fields).audioSource;
                    if (this_03 == (AudioSource *)0x0) goto code_?;
                    value = (pSVar3->fields).audioClipFireBeam;
                  }
                  else {
                    if (uVar4 != 1) goto code_?;
                    this_03 = (pSVar3->fields).audioSource;
                    if (this_03 == (AudioSource *)0x0) goto code_?;
                    value = (pSVar3->fields).audioClipIceBeam;
                  }
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                            (this_03,value,(MethodInfo *)0x0);
code_?:
                  if ((this->fields).beamType == 0) {
                    (this->fields).interactionType = 10;
                  }
                  if ((this->fields).beamType == 1) {
                    (this->fields).interactionType = 0xb;
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      this_01 = (this->fields)._._._.data;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)StringLiteral_beamType,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar11 != (Object *)0x0) {
          if ((pOVar11->klass->_0).element_class != (TypeInfo__SentryGunBeamType->_0).element_class)
          goto code_?;
          puVar12 = (uint8_t *)func_?();
          (this->fields).beamType = *puVar12;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_InitializeInventory
               (MVSentryGun *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  MVSentryGun_InitializeCommon(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).gunObject;
  if (((pMVar1 != (MVSentryGunObject *)0x0) &&
      (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) &&
     (this_00 = (pSVar2->fields).glowPlane, this_00 != (Transform *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnPositionChanged
               (MVSentryGun *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (this_00 = (this->fields)._.cullingSubscriberBase, this_00 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position
              (this_00,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnStateChange
               (MVSentryGun *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  uVar2 = cullingGroupEvent._4_4_;
  iVar3 = cullingGroupEvent.m_Index;
  pCVar4 = (this->fields)._.cullingSubscriberBase;
  if (pCVar4 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar4->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    uVar5 = cullingGroupEvent._4_4_;
    cullingGroupEvent.m_PrevState = (uint8_t)uVar2;
    cullingGroupEvent.m_ThisState = SUB41(uVar2,1);
    cullingGroupEvent._6_2_ = SUB42(uVar2,2);
    cullingGroupEvent_00.m_PrevState = cullingGroupEvent.m_PrevState;
    cullingGroupEvent_00.m_ThisState = cullingGroupEvent.m_ThisState;
    cullingGroupEvent_00._6_2_ = cullingGroupEvent._6_2_;
    cullingGroupEvent_00.m_Index = iVar3;
    cullingGroupEvent._4_4_ = uVar5;
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent_00,distanceBandIndex,(MethodInfo *)0x0);
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
            CullingGroupEvent_get_currentDistance(&cullingGroupEvent,(MethodInfo *)0x0);
    if (iVar3 < 4) {
      value = 1;
    }
    this = (MVSentryGun *)CONCAT31(this._1_3_,value);
    this_00 = (pMVar1->fields)._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      cullingGroupEvent.m_PrevState = 0;
      cullingGroupEvent.m_ThisState = 0;
      cullingGroupEvent._6_2_ = 0;
      cullingGroupEvent.m_Index = (int32_t)this;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnUpdate(MVSentryGun *this,MethodInfo *method)

{
  pMVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffeac;
  puVar6 = &stack0xfffffeac;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Add_int__SentryGunBeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__TryGetValue_int__SentryGunBeam__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Sentry_gun_have_an_invalid_beam_);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  RStack_7.m_Origin.x = 0.0;
  RStack_7.m_Origin.y = 0.0;
  RStack_7.m_Origin.z = 0.0;
  RStack_7.m_Direction.x = 0.0;
  pMStack_8 = (MethodInfo *)0x0;
  RStack_7.m_Direction.y = 0.0;
  RStack_7.m_Direction.z = 0.0;
  DStack_9._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_9._version = 0;
  DStack_9._index = 0;
  DStack_9._current.key = 0;
  DStack_9._current.value = (Object *)0x0;
  DStack_9._getEnumeratorRetType = 0;
  LStack_10._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_10._index = 0;
  LStack_10._version = 0;
  LStack_10._current.First = 0;
  LStack_10._current.Last = 0;
  pMVar11 = this;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if ((this->fields).wasDead != 0) {
    pCVar12 = (this->fields).interactable;
    if (pCVar12 == (ClientSideNPCInteractable *)0x0) goto code_?;
    bVar13 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(pCVar12,(MethodInfo *)0x0);
    if (bVar13 == 0) {
      (this->fields).wasDead = 0;
      MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._InputSignalReceiver_k__BackingField == (IInputSignalReceiver *)0x0)
  goto code_?;
  cVar14 = func_?();
  if (cVar14 != '\0') {
    method_00 = (MethodInfo *)(this->fields).interactable;
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    pMVar11 = (MVSentryGun *)0x0;
    bVar13 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead
                       ((ClientSideNPCInteractable *)method_00,(MethodInfo *)0x0);
    if (bVar13 == 0) {
      this_00 = (this->fields).intervalWithRandomSeed;
      if (this_00 == (IntervalWithRandomSeed *)0x0) goto code_?;
      pMVar11 = (MVSentryGun *)&UNK_?;
      bVar13 = IntervalWithRandomSeed::IntervalWithRandomSeed_Update(this_00,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_03 == (MVNetworkGame *)0x0) goto code_?;
        bVar13 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_03,(MethodInfo *)0x0);
        if (bVar13 != 0) {
          pHStack_15 = (HashSet_1_UnityEngine_Vector3_ *)func_?();
          if (pHStack_15 == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3___ctor
                    (pHStack_15,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          pGVar16 = (this->fields)._._.gameObject;
          if ((pGVar16 == (GameObject *)0x0) ||
             (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar16,(MethodInfo *)0x0),
             pTVar17 == (Transform *)0x0)) goto code_?;
          pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_19,pTVar17,(MethodInfo *)0x0);
          uStack_20._0_4_ = pVVar18->x;
          uStack_20._4_4_ = (MethodInfo *)pVVar18->y;
          fStack_21 = pVVar18->z;
          pMStack_22 = (MethodInfo *)(this->fields).laserRange;
          if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar23 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
          iVar24 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Player,(MethodInfo *)0x0);
          method_01 = uStack_20._4_4_;
          position_01.z = fStack_21;
          position_01.x = (float)(undefined4)uStack_20;
          position_01.y = (float)uStack_20._4_4_;
          iVar24 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                   Physics_OverlapSphereNonAlloc_1
                             (position_01,(float)pMStack_22,pCVar23,1 << ((byte)iVar24 & 0x1f),
                              (MethodInfo *)0x0);
          uStack_20 = CONCAT44(iVar24,(undefined4)uStack_20);
          fStack_21 = 0.0;
          if (0 < iVar24) {
            pMStack_22 = (MethodInfo *)0x10;
            do {
              if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pCVar23 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
              if (pCVar23 == (Collider__Array *)0x0) goto code_?;
              if (pCVar23->max_length <= (uint)fStack_21) {
                func_?();
                func_?();
                goto code_?;
              }
              this_01 = *(Component **)((int)pCVar23->vector + (int)&pMStack_22[-1].field8_0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              method_01 = (MethodInfo *)
                          UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(this_01,(MethodInfo *)0x0);
              pMVar25 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                  ((Transform *)method_01,(MethodInfo *)0x0);
              if (pMVar25 != (MVWorldObjectClient *)0x0) {
                iStack_26 = (pMVar25->fields)._.id;
                pMVar27 = (MethodInfo *)
                          MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                    (pMVar25,(MethodInfo *)0x0);
                pMStack_28 = pMVar27;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                   ((Object_1 *)pMVar27,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar13 == 0) {
                  uStack_29._0_5_ = CONCAT14((this->fields).interactionType,(undefined4)uStack_29);
                  if (pMVar27 == (MethodInfo *)0x0) goto code_?;
                  method_01 = uStack_29._4_4_;
                  cVar14 = func_?();
                  if (cVar14 != '\0') {
                    pMVar30 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
                    ;
                    if ((pMVar30 == (MVWorldObjectClientManager *)0x0) ||
                       (pMVar25 = (MVWorldObjectClient *)
                                  MVWorldObjectClientManager::
                                  MVWorldObjectClientManager_GetWorldObject
                                            (pMVar30,iStack_26,(MethodInfo *)0x0),
                       pMVar25 == (MVWorldObjectClient *)0x0)) goto code_?;
                    puVar31 = (undefined8 *)func_?();
                    uStack_32 = *puVar31;
                    pDStack_33 = *(Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_
                                   **)(puVar31 + 1);
                    pGVar16 = (this->fields)._._.gameObject;
                    if ((pGVar16 == (GameObject *)0x0) ||
                       (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar16,(MethodInfo *)0x0),
                       pTVar17 == (Transform *)0x0)) goto code_?;
                    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xfffffeec,pTVar17,(MethodInfo *)0x0);
                    uStack_34 = *(double *)pVVar18;
                    uStack_35 = CONCAT44(pVVar18->z,(undefined4)uStack_35);
                    pGVar16 = (this->fields)._._.gameObject;
                    if ((pGVar16 == (GameObject *)0x0) ||
                       (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar16,(MethodInfo *)0x0),
                       pTVar17 == (Transform *)0x0)) goto code_?;
                    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&puStack_36,pTVar17,(MethodInfo *)0x0);
                    uStack_37._0_4_ = pVVar18->x;
                    uStack_37._4_4_ = pVVar18->y;
                    pMStack_38 = (MethodInfo *)pVVar18->z;
                    VStack_19.z = (float)pDStack_33 - (float)pMStack_38;
                    uStack_39 = CONCAT44(uStack_32._4_4_ - uStack_37._4_4_,
                                         (float)uStack_32 - (float)uStack_37);
                    fStack_40 = VStack_19.z;
                    pVVar18 = (Vector3 *)func_?();
                    method_00 = (MethodInfo *)pVVar18->y;
                    origin.z = (float)uStack_35._4_4_;
                    origin._0_8_ = uStack_34;
                    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                              (&RStack_7,origin,*pVVar18,(MethodInfo *)0x0);
                    ray.m_Origin.y = RStack_7.m_Origin.y;
                    ray.m_Origin.x = RStack_7.m_Origin.x;
                    ray.m_Origin.z = RStack_7.m_Origin.z;
                    ray.m_Direction.x = RStack_7.m_Direction.x;
                    ray.m_Direction.y = RStack_7.m_Direction.y;
                    ray.m_Direction.z = RStack_7.m_Direction.z;
                    method_01 = (MethodInfo *)RStack_7.m_Direction.y;
                    bVar13 = MVSentryGun_HitsTarget(this,ray,iStack_26,(MethodInfo *)0x0);
                    if (bVar13 != 0) {
                      bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                               Int32]::HashSet_1_System_Int32__Contains
                                         ((HashSet_1_System_Int32_ *)pHStack_15,iStack_26,
                                          MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                         );
                      if (bVar13 == 0) {
                        pDVar41 = (Dictionary_2_System_Object_System_Object_ *)
                                 (this->fields).woIdsBeamsMap;
                        if (pDVar41 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                        goto code_?;
                        bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Object]::
                                 Dictionary_2_System_Object_System_Object__TryGetValue
                                           (pDVar41,(Object *)(pMVar25->fields)._.id,
                                            (Object **)&pMStack_8,
                                            MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__TryGetValue_int__SentryGunBeam__
                                           );
                        if (bVar13 == 0) {
code_?:
                          pDVar42 = (this->fields).woIdsBeamsMap;
                          if (pDVar42 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0)
                          goto code_?;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__Remove
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar42,
                                     (pMVar25->fields)._.id,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                                    );
                          uVar43 = (this->fields).beamType;
                          if (uVar43 == 0) {
                            iVar44 = func_?();
                            if (iVar44 == 0) goto code_?;
                            pDStack_45 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_
                                          *)CONCAT31(pDStack_45._1_3_,(this->fields).beamType);
                            method_00 = (MethodInfo *)&UNK_?;
                            pMStack_8 = (MethodInfo *)
                                         SentryGunBeam::SentryGunBeam_Create
                                                   (*(SentryGunBeam **)(iVar44 + 0x138),
                                                    (SentryGunBeamType__Enum)pDStack_45,this,
                                                    (MethodInfo *)0x0);
                          }
                          else if (uVar43 == 1) {
                            iVar44 = func_?();
                            if (iVar44 == 0) goto code_?;
                            pDStack_46 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_
                                          *)CONCAT31(pDStack_46._1_3_,(this->fields).beamType);
                            pMStack_8 = (MethodInfo *)
                                         SentryGunBeam::SentryGunBeam_Create
                                                   (*(SentryGunBeam **)(iVar44 + 0x134),
                                                    (SentryGunBeamType__Enum)pDStack_46,this,
                                                    (MethodInfo *)0x0);
                          }
                          else {
                            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0)
                            {
                              func_?();
                            }
                            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                                      ((Object *)StringLiteral_Sentry_gun_have_an_invalid_beam_,
                                       (MethodInfo *)0x0);
                          }
                          pDVar41 = (Dictionary_2_System_Object_System_Object_ *)
                                   (this->fields).woIdsBeamsMap;
                          if (pDVar41 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                          goto code_?;
                          method_01 = pMStack_8;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                    (pDVar41,(Object *)(pMVar25->fields)._.id,(Object *)pMStack_8,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Add_int__SentryGunBeam_
                                    );
                        }
                        else {
                          uStack_35 = CONCAT44(pMStack_8,(undefined4)uStack_35);
                          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                   Object_1_op_Inequality
                                             (uStack_35._4_4_,(Object_1 *)0x0,(MethodInfo *)0x0);
                          if (bVar13 == 0) goto code_?;
                          if (pMStack_8 == (MethodInfo *)0x0) goto code_?;
                          pMStack_8->klass = (Il2CppClass *)0x3f800000;
                        }
                        MVSentryGun_ApplyDamage
                                  (this,pMVar25,(InteractionDataHandlerBase *)pMStack_28,
                                   (MethodInfo *)0x0);
                        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                        HashSet_1_System_Object__Add
                                  ((HashSet_1_System_Object_ *)pHStack_15,
                                   (Object *)(pMVar25->fields)._.id,
                                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_)
                        ;
                      }
                    }
                  }
                }
              }
              fStack_21 = (float)((int)fStack_21 + 1);
              pMStack_22 = (MethodInfo *)&pMStack_22->virtualMethodPointer;
            } while ((int)fStack_21 < (int)uStack_20._4_4_);
          }
          pMVar27 = (MethodInfo *)func_?();
          pMStack_22 = pMVar27;
          if (pMVar27 == (MethodInfo *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)pMVar27,
                     MethodInfo__System__Collections__Generic__List<int>__List__);
          pDVar41 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).woIdsBeamsMap;
          pMStack_28 = pMVar27;
          if (pDVar41 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          pDVar47 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               auStack_48,pDVar41,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                              );
          uStack_49 = 0;
          DStack_9._dictionary =
               (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar47->_dictionary;
          DStack_9._version = pDVar47->_version;
          DStack_9._index = pDVar47->_index;
          DStack_9._current.key = (int32_t)(pDVar47->_current).key;
          DStack_9._16_8_ = *(undefined8 *)&(pDVar47->_current).value;
          uStack_2 = 1;
          pDStack_46 = &DStack_9;
          while (bVar13 = mscorlib.dll::System::Collections::Generic::
                          Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                          Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                                    (&DStack_9,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                                    ), bVar13 != 0) {
            uStack_20 = CONCAT44(DStack_9._current.key,(undefined4)uStack_20);
            uStack_34 = (double)CONCAT44(DStack_9._current.value,(undefined4)uStack_34);
            bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                     HashSet_1_System_Int32__Contains
                               ((HashSet_1_System_Int32_ *)pHStack_15,DStack_9._current.key,
                                MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                               );
            if (bVar13 == 0) {
              method_00 = pMStack_22;
              func_?(pMStack_22,uStack_20._4_4_,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            }
          }
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_9,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
                     ,method_00);
          uStack_2 = 0xffffffff;
          pMVar11 = (MVSentryGun *)
                    MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__;
          pLVar50 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                *)(auStack_48 + 8),
                               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               pMStack_22,
                               MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__)
          ;
          uStack_20 = ZEXT48(&LStack_10) << 0x20;
          LStack_10._list = pLVar50->_list;
          LStack_10._index = pLVar50->_index;
          LStack_10._version = pLVar50->_version;
          LStack_10._current = pLVar50->_current;
          uStack_2 = 4;
          while (bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                          Text::RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                    (&LStack_10,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                    ), bVar13 != 0) {
            pDVar42 = (this->fields).woIdsBeamsMap;
            if (pDVar42 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar42,
                       (int32_t)LStack_10._current,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                      );
          }
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_10,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     ,method_01);
          uStack_2 = 0xffffffff;
        }
      }
      pMVar51 = (this->fields).gunObject;
      if ((pMVar51 == (MVSentryGunObject *)0x0) ||
         (pSVar52 = (pMVar51->fields).sentryGunScript, pSVar52 == (SentryGunScript *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_02 = (pSVar52->fields).sentryRenderer;
      if (this_02 == (MeshRenderer *)0x0) goto code_?;
      this_04 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_02,(MethodInfo *)0x0);
      pHStack_15 = (HashSet_1_UnityEngine_Vector3_ *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
      ;
      uStack_34 = (double)(float)pHStack_15;
      fVar53 = (float10)func_?();
      pMVar54 = (MVSentryGun *)((float)pHStack_15 - (float)fVar53);
      if ((float)pMVar54 < 0.0) {
        pMVar54 = (MVSentryGun *)0x0;
      }
      else if ((float)_UNK_? < (float)pMVar54) {
        pMVar54 = _UNK_?;
      }
      uStack_20 = ZEXT48(pMVar54);
      if (this_04 == (Material *)0x0) goto code_?;
      value.y = 0.0;
      value.x = (float)pMVar54;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
                (this_04,StringLiteral__MainTex,value,(MethodInfo *)0x0);
    }
  }
  MVSentryGun_DoFrameDelete(this,(MethodInfo *)0x0);
  pDVar41 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).woIdsBeamsMap;
  if (pDVar41 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar47 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                         auStack_48,pDVar41,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                        );
    uStack_55 = 0;
    DStack_9._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar47->_dictionary;
    DStack_9._version = pDVar47->_version;
    DStack_9._index = pDVar47->_index;
    DStack_9._current.key = (int32_t)(pDVar47->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar47->_current).value;
    uStack_2 = 7;
    pDStack_45 = &DStack_9;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                              (&DStack_9,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                              ), bVar13 != 0) {
      uStack_20 = CONCAT44(DStack_9._current.key,(undefined4)uStack_20);
      pHStack_15 = (HashSet_1_UnityEngine_Vector3_ *)DStack_9._current.value;
      pMVar30 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar30 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar11 = (MVSentryGun *)0x0;
      pMVar56 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar30,(int32_t)uStack_20._4_4_,(MethodInfo *)0x0);
      if (pMVar56 == (MVWorldObject *)0x0) goto code_?;
      uStack_20 = CONCAT44(pMVar56[1].fields.objectLinkRefs,(undefined4)uStack_20);
      pGVar16 = (this->fields)._._.gameObject;
      if ((pGVar16 == (GameObject *)0x0) ||
         (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar16,(MethodInfo *)0x0), pTVar17 == (Transform *)0x0))
      goto code_?;
      pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (aVStack_57,pTVar17,(MethodInfo *)0x0);
      uStack_29._0_4_ = pVVar18->x;
      uStack_29._4_4_ = (MethodInfo *)pVVar18->y;
      pDStack_33 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)pVVar18->z
      ;
      uStack_32 = uStack_29;
      pDStack_46 = pDStack_33;
      if (uStack_20._4_4_ == (MethodInfo *)0x0) goto code_?;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                ((Bounds *)&stack0xfffffeb8,(Collider *)uStack_20._4_4_,(MethodInfo *)0x0);
      pRVar58 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          ((Regex_CachedCodeEntryKey *)&puStack_36,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&stack0xfffffef8,(MethodInfo *)0x0);
      uStack_37._0_4_ = (float)pRVar58->_options;
      uStack_37._4_4_ = (float)pRVar58->_cultureKey;
      pMStack_38 = (MethodInfo *)pRVar58->_pattern;
      uStack_35 = uStack_37;
      pMStack_22 = pMStack_38;
      if (pHStack_15 == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      pMStack_28 = (MethodInfo *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pHStack_15,(MethodInfo *)0x0);
      VStack_19.z = (float)pMStack_38 - (float)pDStack_33;
      puStack_36 = &uStack_39;
      uStack_39 = CONCAT44(uStack_37._4_4_ - uStack_32._4_4_,(float)uStack_37 - (float)uStack_32);
      fStack_40 = VStack_19.z;
      pdVar59 = (double *)func_?();
      uStack_34 = *pdVar59;
      uStack_20 = CONCAT44(*(undefined4 *)(pdVar59 + 1),(undefined4)uStack_20);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      forward.z = (float)uStack_20._4_4_;
      forward._0_8_ = uStack_34;
      pQVar60 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                          ((Quaternion *)&stack0xfffffed0,forward,
                           TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0
                          );
      if (pMStack_28 == (MethodInfo *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                ((Transform *)pMStack_28,*pQVar60,(MethodInfo *)0x0);
      *(undefined8 *)&(pHStack_15->fields)._siInfo = uStack_35;
      pHStack_15[1].monitor = (MonitorData *)pMStack_22;
      pHVar61 = (pHStack_15->fields)._slots;
      (pHStack_15->fields)._freeList = (undefined4)uStack_29;
      (pHStack_15->fields)._comparer = (IEqualityComparer_1_UnityEngine_Vector3_ *)uStack_29._4_4_;
      (pHStack_15->fields)._version = (int32_t)pDStack_46;
      if (pHVar61 == (HashSet_1_T_Slot_UnityEngine_Vector3___Array *)0x0) goto code_?;
      position.z = (float)pDStack_46;
      position.x = (float)(undefined4)uStack_29;
      position.y = (float)uStack_29._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                ((LineRenderer *)pHVar61,0,position,(MethodInfo *)0x0);
      pHVar61 = (pHStack_15->fields)._slots;
      if (pHVar61 == (HashSet_1_T_Slot_UnityEngine_Vector3___Array *)0x0) goto code_?;
      position_00.z = (float)pMStack_22;
      position_00.x = (float)(undefined4)uStack_35;
      position_00.y = (float)uStack_35._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                ((LineRenderer *)pHVar61,1,position_00,(MethodInfo *)0x0);
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
               ,(MethodInfo *)pMVar11);
    uStack_2 = 0xffffffff;
    pDVar62 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).woIdsBeamsMap;
    if (pDVar62 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      iVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                         (pDVar62,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                         );
      if (0 < iVar24) {
        pMVar51 = (this->fields).gunObject;
        if ((pMVar51 == (MVSentryGunObject *)0x0) ||
           (pAVar63 = (pMVar51->fields).audioSource, pAVar63 == (AudioSource *)0x0))
        goto code_?;
        bVar13 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                           (pAVar63,(MethodInfo *)0x0);
        if (bVar13 == 0) {
          pMVar51 = (this->fields).gunObject;
          if ((pMVar51 == (MVSentryGunObject *)0x0) ||
             (pAVar63 = (pMVar51->fields).audioSource, pAVar63 == (AudioSource *)0x0))
          goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                    (pAVar63,(MethodInfo *)0x0);
        }
      }
      pDVar62 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(this->fields).woIdsBeamsMap;
      if (pDVar62 !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        iVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                           (pDVar62,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                           );
        if (iVar24 == 0) {
          pMVar51 = (this->fields).gunObject;
          if ((pMVar51 == (MVSentryGunObject *)0x0) ||
             (pAVar63 = (pMVar51->fields).audioSource, pAVar63 == (AudioSource *)0x0))
          goto code_?;
          bVar13 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                             (pAVar63,(MethodInfo *)0x0);
          if (bVar13 != 0) {
            pMVar51 = (this->fields).gunObject;
            if ((pMVar51 == (MVSentryGunObject *)0x0) ||
               (pAVar63 = (pMVar51->fields).audioSource, pAVar63 == (AudioSource *)0x0))
            goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                      (pAVar63,(MethodInfo *)0x0);
          }
        }
        pDVar62 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)(this->fields).woIdsBeamsMap;
        if (pDVar62 !=
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0) {
          iVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                   RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                             (pDVar62,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                             );
          pMVar11 = _UNK_?;
          if (0 < iVar24) {
            pMVar11 = _UNK_?;
          }
          pCVar12 = (this->fields).interactable;
          if (pCVar12 != (ClientSideNPCInteractable *)0x0) {
            bVar13 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead
                               (pCVar12,(MethodInfo *)0x0);
            this = pMVar11;
            if (bVar13 != 0) {
              this = (MVSentryGun *)0x0;
            }
            pMStack_28 = (MethodInfo *)(pMVar1->fields).glowFactor;
            fVar64 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            pMVar11 = (MVSentryGun *)(fVar64 * _UNK_?);
            if ((float)pMVar11 < 0.0) {
              pMVar11 = (MVSentryGun *)0x0;
            }
            else if ((float)_UNK_? < (float)pMVar11) {
              pMVar11 = _UNK_?;
            }
            (pMVar1->fields).glowFactor =
                 ((float)this - (float)pMStack_28) * (float)pMVar11 + (float)pMStack_28;
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar65 = (code *)swi(3);
  (*pcVar65)();
  return;
}


/* Void ReceiveDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_ReceiveDamage
               (MVSentryGun *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (_UNK_? < amount) {
    pMVar1 = (this->fields).gunObject;
    if ((pMVar1 == (MVSentryGunObject *)0x0) ||
       (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 == (SentryGunScript *)0x0))
    goto code_?;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (pSVar2->fields).damageBlinkTimeoutTime = fVar3 + _UNK_?;
  }
  this_00 = (this->fields).interactable;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    bVar4 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0);
    if (bVar4 == 0) {
code_?:
      MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
      return;
    }
    pMVar1 = (this->fields).gunObject;
    if ((pMVar1 != (MVSentryGunObject *)0x0) &&
       (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) {
      if (cRam_? == '\0') {
        func_?(&
                        UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar5 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar5 != (PrefabPool *)0x0) {
        pPVar6 = (pPVar5->fields).particleExplosion;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pSVar2,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&puStack_9,pTVar7,(MethodInfo *)0x0);
          uVar10._0_4_ = pVVar8->x;
          uStack_11 = pVVar8->y;
          fVar3 = pVVar8->z;
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pSVar2,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            uVar10 = uVar10 & 0xffffffff00000000;
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&fStack_13,pTVar7,(MethodInfo *)0x0);
            fStack_13 = pQVar12->x;
            puStack_9 = (undefined *)pQVar12->y;
            fVar14 = pQVar12->z;
            fVar15 = pQVar12->w;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            position.z = fVar3;
            uStack_11 = (undefined4)(uVar10 >> 0x20);
            position.x = (float)(undefined4)uVar10;
            position.y = (float)uStack_11;
            rotation.y = (float)puStack_9;
            rotation.x = fStack_13;
            rotation.z = fVar14;
            rotation.w = fVar15;
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                      ((Object *)pPVar6,position,rotation,
                       UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                      );
            pMVar1 = (this->fields).gunObject;
            if (((pMVar1 != (MVSentryGunObject *)0x0) &&
                (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) &&
               (pPVar6 = (pSVar2->fields).smokeEffectEmitter, pPVar6 != (ParticleSystem *)0x0)) {
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_Play_1(pPVar6,(MethodInfo *)0x0);
              (this->fields).wasDead = 1;
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Reset(MVSentryGun *this,MethodInfo *method)

{
  this_00 = (this->fields).interactable;
  (this->fields).wasDead = 0;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    ClientSideNPCInteractable::ClientSideNPCInteractable_Reset(this_00,(MethodInfo *)0x0);
    MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Select
               (MVSentryGun *this,Color color,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  return;
}


/* Void UpdateSentryState() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_UpdateSentryState
               (MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&StringLiteral_health);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).interactable;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    bVar1 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0);
    pMVar2 = (this->fields).gunObject;
    if (bVar1 == 0) {
      if (((pMVar2 != (MVSentryGunObject *)0x0) &&
          (pSVar3 = (pMVar2->fields).sentryGunScript, pSVar3 != (SentryGunScript *)0x0)) &&
         (this_01 = (pSVar3->fields).smokeEffectEmitter, this_01 != (ParticleSystem *)0x0)) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (this_01,(MethodInfo *)0x0);
        pMVar2 = (this->fields).gunObject;
        if (pMVar2 != (MVSentryGunObject *)0x0) {
          pSVar3 = (pMVar2->fields).sentryGunScript;
          hashtable = (Dictionary_2_System_Object_System_Object_ *)
                      (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          this = (MVSentryGun *)
                 Extensions::Extensions_GetObscuredType
                           (hashtable,StringLiteral_health,(MethodInfo *)0x0);
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          }
          if (this != (MVSentryGun *)0x0) {
            pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
            if ((this->klass->_0).element_class !=
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class)
            goto code_?;
            pOVar5 = (ObscuredFloat *)func_?(this);
            value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit_1(*pOVar5,(MethodInfo *)0x0);
            if (pSVar3 != (SentryGunScript *)0x0) {
              SentryGunScript::SentryGunScript_SetHealth(pSVar3,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else if ((pMVar2 != (MVSentryGunObject *)0x0) &&
            (pSVar3 = (pMVar2->fields).sentryGunScript, pSVar3 != (SentryGunScript *)0x0)) {
      SentryGunScript::SentryGunScript_SetHealth(pSVar3,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pOVar4 = extraout_ECX;
code_?:
  func_?(this,pOVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVSentryGun(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun__ctor
               (MVSentryGun *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__IntervalWithRandomSeed);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__MVSentryGunObject);
    cRam_? = '\x01';
  }
  (this->fields).laserRange = 20.0;
  (this->fields).pushBackStrength = 5.0;
  this_00 = (IntervalWithRandomSeed *)func_?(TypeInfo__IntervalWithRandomSeed);
  if (this_00 != (IntervalWithRandomSeed *)0x0) {
    IntervalWithRandomSeed::IntervalWithRandomSeed__ctor(this_00,1.0,(MethodInfo *)0x0);
    (this->fields).intervalWithRandomSeed = this_00;
    func_?(&(this->fields).intervalWithRandomSeed,this_00);
    this_01 = (Dictionary_2_System_Int32_SentryGunBeam_ *)
              func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>
                             );
    if (this_01 != (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Dictionary__
                );
      (this->fields).woIdsBeamsMap = this_01;
      func_?(&(this->fields).woIdsBeamsMap,this_01);
      this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                func_?(TypeInfo__System__Collections__Generic__List<int>);
      if (this_02 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
                  (this_02,8,MethodInfo__System__Collections__Generic__List<int>__List_int_);
        (this->fields).deleteList = (List_1_System_Int32_ *)this_02;
        func_?(&(this->fields).deleteList,this_02);
        (this->fields).glowFactor = 0.5;
        (this->fields).beamType = 1;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar1 != (PrefabPool *)0x0) {
          MVLogicObject::MVLogicObject__ctor
                    ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvSentryGunPrefab,
                     worldObjects,(MethodInfo *)0x0);
          piVar2 = &(this->fields)._._.interactionFlags;
          *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
          piVar2 = &(this->fields)._._.interactionFlags;
          *(uint *)piVar2 = (uint)*piVar2 | 8;
          pMVar3 = (MVSentryGunObject *)(this->fields)._._.component;
          *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
               *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
          if (pMVar3 == (MVSentryGunObject *)0x0) {
            (this->fields).gunObject = (MVSentryGunObject *)0x0;
          }
          else {
            if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchyDepth <
                 (TypeInfo__MVSentryGunObject->_1).typeHierarchyDepth) ||
               ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy
                [(TypeInfo__MVSentryGunObject->_1).typeHierarchyDepth - 1] !=
                (Il2CppClass *)TypeInfo__MVSentryGunObject)) goto code_?;
            (this->fields).gunObject = pMVar3;
            if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchyDepth <
                 (TypeInfo__MVSentryGunObject->_1).typeHierarchyDepth) ||
               ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy
                [(TypeInfo__MVSentryGunObject->_1).typeHierarchyDepth - 1] !=
                (Il2CppClass *)TypeInfo__MVSentryGunObject)) goto code_?;
          }
          func_?();
          this_03 = (HashSet_1_UnityEngine_Vector3_ *)
                    func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
          if (this_03 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
            HashSet_1_UnityEngine_Vector3___ctor
                      (this_03,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Add
                      ((HashSet_1_System_Object_ *)this_03,(Object *)(this->fields)._._._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            (this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField =
                 (HashSet_1_System_Int32_ *)this_03;
            func_?(&(this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField,this_03);
            (this->fields)._._._PlayInteractionType_k__BackingField = 1;
            return;
          }
        }
      }
    }
  }
  func_?();
  pMVar3 = extraout_EDX;
code_?:
  func_?(pMVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSentryGun::MVSentryGun_get_DocumentationType
          (MVSentryGun *this,MethodInfo *method)

{
  uVar1 = (this->fields).beamType;
  if (uVar1 == 0) {
    return MVWorldObjectDocumentationType__Enum_FireSentryTower;
  }
  MVar2 = MVWorldObjectDocumentationType__Enum_Missing;
  if (uVar1 == 1) {
    MVar2 = MVWorldObjectDocumentationType__Enum_FrostSentryTower;
  }
  return MVar2;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVSentryGun::MVSentryGun_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVSentryGun *this,MethodInfo *method)

{
  __return_storage_ptr__->x = -2.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

