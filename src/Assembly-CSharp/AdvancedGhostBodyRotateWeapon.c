
/* Void Attack(Int32) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Attack
               (AdvancedGhostBodyRotateWeapon *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_02 = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (this_01,woid,(MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClient *)0x0) {
    pTVar2 = (this->fields).timeoutMap;
    if (pTVar2 == (TimeoutMap *)0x0) goto code_?;
    bVar3 = TimeoutMap::TimeoutMap_Contains(pTVar2,(this_02->fields)._.id,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      this_03 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (this_02,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar5 = (pMVar4->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) {
          MVar6 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                            (pMVar5,(this_02->fields)._.ownerActorNr,(MethodInfo *)0x0);
          if (MVar6 == (this->fields).alliedTeam) {
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar4 == (MVNetworkGame *)0x0) ||
               (pMVar5 = (pMVar4->fields).teamManager, pMVar5 == (MVTeamManager *)0x0))
            goto code_?;
            MVTeamManager::MVTeamManager_TeamCount(pMVar5,(MethodInfo *)0x0);
          }
          (*(code *)(this_02->klass->vtable).GetTargetPosition.method)();
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if ((this_04 != (GameObject *)0x0) &&
             (this_05 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_04,(MethodInfo *)0x0),
             this_05 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffd8,this_05,(MethodInfo *)0x0);
            puVar7 = (undefined8 *)func_?();
            fVar8 = (this->fields).factor;
            impulse.y = (float)(MonitorData *)((ulonglong)*puVar7 >> 0x20) * _UNK_? * fVar8;
            impulse.x = (float)(Enum__Class *)*puVar7 * _UNK_? * fVar8;
            impulse.z = *(float *)(puVar7 + 1) * _UNK_? * fVar8;
            pIVar9 = AdvancedGhostBodyRotateWeaponPackage::
                      AdvancedGhostBodyRotateWeaponPackage_Create
                                ((InteractionData *)&stack0xffffffd0,(float)this_02,impulse,
                                 (MethodInfo *)0x0);
            if (this_03 != (InteractionDataHandlerBase *)0x0) {
              bVar3 = InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                                (this_03,*pIVar9,1,(MethodInfo *)0x0);
              if (bVar3 == 0) {
                return;
              }
              pTVar2 = (this->fields).timeoutMap;
              if (pTVar2 != (TimeoutMap *)0x0) {
                TimeoutMap::TimeoutMap_Add(pTVar2,(this_02->fields)._.id,(MethodInfo *)0x0);
                this_00 = (this->fields).weaponHitSound;
                if (this_00 != (AudioSource *)0x0) {
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                            (this_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
      pSVar10 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe4,(MethodInfo *)0x0)
      ;
      pSVar10 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_WorldObject_does_not_have_intera,pSVar10,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar10,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Init(AudioSource, MVCubeModelBase) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Init
               (AdvancedGhostBodyRotateWeapon *this,AudioSource *hitSound,MVCubeModelBase *body,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    func_?(&
                    MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_
                   );
    cRam_? = '\x01';
  }
  (this->fields).weaponHitSound = hitSound;
  func_?(&(this->fields).weaponHitSound,hitSound);
  if (body == (MVCubeModelBase *)0x0) {
    func_?();
  }
  else {
    pAVar1 = (body->fields).Changed;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      (body->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
code_?:
      func_?();
      AdvancedGhostBodyRotateWeapon_SetupWeaponCollision
                ((AdvancedGhostBodyRotateWeapon *)&(body->fields).Changed,(MethodInfo *)0x0);
      return;
    }
    pAVar1 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
    if (pAVar1 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      (body->fields).Changed = pAVar1;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupWeaponCollision() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::
     AdvancedGhostBodyRotateWeapon_SetupWeaponCollision
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  CStack_3.fields._.m_CachedPtr = (Object_1__Fields)unaff_FS_OFFSET->m_CachedPtr;
  unaff_FS_OFFSET->m_CachedPtr = &CStack_3.fields;
  CStack_3.monitor = (MonitorData *)&stack0xffffffc8;
  pMVar4 = (MonitorData *)&stack0xffffffc8;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&
                    AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                   );
    func_?(&
                    AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Clear__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Transform);
    cRam_? = '\x01';
    pMVar4 = CStack_3.monitor;
  }
  CStack_3.monitor = pMVar4;
  pLVar5 = (this->fields).ghostTriggers;
  if (pLVar5 != (List_1_AdvancedGhostTriggerBase_ *)0x0) {
    iVar6 = (pLVar5->fields)._size;
    piVar7 = &(pLVar5->fields)._version;
    *piVar7 = *piVar7 + 1;
    (pLVar5->fields)._size = 0;
    if (0 < iVar6) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar5->fields)._items,0,iVar6,(MethodInfo *)0x0);
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      CStack_3.klass =
           (Component__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                     (this_00,(MethodInfo *)0x0);
      unaff_EDI = &CStack_3;
      uStack_1 = 1;
      while (CStack_3.klass != (Component__Class *)0x0) {
        cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,CStack_3.klass);
        pCVar9 = CStack_3.klass;
        if (cVar8 == '\0') {
          uStack_1 = 0xffffffff;
          iVar6 = func_?(CStack_3.klass,TypeInfo__System__IDisposable);
          if (iVar6 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iVar6);
            unaff_FS_OFFSET->m_CachedPtr = (void *)CStack_3.fields._.m_CachedPtr;
            return;
          }
          unaff_FS_OFFSET->m_CachedPtr = (void *)CStack_3.fields._.m_CachedPtr;
          return;
        }
        if (CStack_3.klass == (Component__Class *)0x0) break;
        pIVar10 = (IEnumerator__Class *)((CStack_3.klass)->_0).image;
        uVar11 = 0;
        uVar12._0_1_ = (pIVar10->_1).rank;
        uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
        if (uVar12 != 0) {
          do {
            if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pIVar10 = (IEnumerator__Class *)((CStack_3.klass)->_0).image;
              ppMVar13 = &(&(pIVar10->vtable).get_Current)[pIVar10->interfaceOffsets[uVar11].offset].
                          method;
              goto code_?;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar12);
        }
        ppMVar13 = (MethodInfo **)
                   func_?(CStack_3.klass,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        this_01 = (Component *)(*(code *)*ppMVar13)(pCVar9,ppMVar13[1]);
        unaff_EDI = this_01;
        if (this_01 == (Component *)0x0) break;
        pTVar14 = TypeInfo__UnityEngine__Transform;
        if (((this_01->klass->_1).naturalAligment <
             (TypeInfo__UnityEngine__Transform->_1).naturalAligment) ||
           ((this_01->klass->_1).typeHierarchy
            [(TypeInfo__UnityEngine__Transform->_1).naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
        unaff_EDI = (Component *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              (this_01,
                               UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                              );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          this_02 = (Collider *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              (this_01,
                               UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                              );
          if (this_02 == (Collider *)0x0) break;
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                    (this_02,1,(MethodInfo *)0x0);
          pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_01,(MethodInfo *)0x0);
          if (pGVar16 == (GameObject *)0x0) break;
          unaff_EDI = (Component *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar16,
                                 AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                                );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar15 != 0) {
            pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_01,(MethodInfo *)0x0);
            if (pGVar16 == (GameObject *)0x0) break;
            unaff_EDI = (Component *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  (pGVar16,
                                   AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                                  );
          }
          pLVar5 = (this->fields).ghostTriggers;
          if (pLVar5 == (List_1_AdvancedGhostTriggerBase_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar5,(Object *)unaff_EDI,
                     MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                    );
        }
      }
    }
  }
  func_?();
  pTVar14 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pTVar14);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Update
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (0.0 < (this->fields).factor) {
    this_00 = (this->fields).timeoutMap;
    if (this_00 != (TimeoutMap *)0x0) {
      TimeoutMap::TimeoutMap_Update(this_00,(MethodInfo *)0x0);
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).ghostTriggers;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_8,this_01,
                            MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__GetEnumerator__
                           );
        LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
        LStack_6._index = pLVar7->_index;
        LStack_6._version = pLVar7->_version;
        LStack_6._current = *(Object **)&pLVar7->_current;
        LStack_8._version = 0;
        uStack_1 = 1;
        LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
        while( true ) {
          bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__MoveNext__
                            );
          pOVar10 = LStack_6._current;
          if (bVar9 == 0) break;
          if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
          goto code_?;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pIStack_11 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray
                                 (*(IEnumerable_1_System_Int32_ **)((int)pOVar10 + 0x10),
                                  System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                                 );
          uVar12 = 0;
          if (pIStack_11 == (Int32__Array *)0x0) goto code_?;
          for (; (int)uVar12 < (int)pIStack_11->max_length; uVar12 = uVar12 + 1) {
            if (pIStack_11->max_length <= uVar12) {
              func_?();
              goto code_?;
            }
            AdvancedGhostBodyRotateWeapon_Attack(this,pIStack_11->vector[uVar12],(MethodInfo *)0x0);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__Dispose__
                   ,unaff_EBX);
        goto code_?;
      }
    }
code_?:
    func_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* AdvancedGhostBodyRotateWeapon() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon__ctor
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>);
    func_?(&TypeInfo__TimeoutMap);
    cRam_? = '\x01';
  }
  (this->fields).factor = 1.0;
  this_00 = (TimeoutMap *)func_?(TypeInfo__TimeoutMap);
  TimeoutMap::TimeoutMap__ctor(this_00,0.5,(MethodInfo *)0x0);
  (this->fields).timeoutMap = this_00;
  func_?(&(this->fields).timeoutMap,this_00);
  (this->fields).alliedTeam = 4;
  this_01 = (List_1_AdvancedGhostTriggerBase_ *)
            func_?(TypeInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__List__);
  (this->fields).ghostTriggers = this_01;
  func_?(&(this->fields).ghostTriggers,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Void body_Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_body_Changed
               (AdvancedGhostBodyRotateWeapon *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  AdvancedGhostBodyRotateWeapon_SetupWeaponCollision(this,(MethodInfo *)0x0);
  return;
}

