
/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Clone
          (MVGamePointChest *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._GameCoinManager_k__BackingField,
     this_00 != (MVGameCoinManager *)0x0)) {
    MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor(this_00,(MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
      func_?(&StringLiteral_This_is_a_hack_created_for_spawn);
      cRam_? = '\x01';
    }
    this_01 = cloneBookkeeping;
    pOVar2 = (Object *)
             (*(code *)cloneBookkeeping->klass[1]._0.events)
                       (cloneBookkeeping,cloneBookkeeping->klass[1]._0.properties);
    pDVar3 = (Dictionary_2_System_Int32_System_Int32_ *)
             ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       (pOVar2,(MethodInfo *)0x0);
    if (pDVar3 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar3->klass->_1).naturalAligment < bVar4) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        func_?(pDVar3,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
        goto code_?;
      }
    }
    ppDVar5 = &this_01[2].fields.worldObjectIdsMaps;
    *ppDVar5 = pDVar3;
    func_?(ppDVar5,pDVar3);
    MVWorldObject.dll::MV::WorldObject::MVWorldObject::
    MVWorldObject_DeepCopyWorldObjectDataParameters((MVWorldObject *)this_01,(MethodInfo *)0x0);
    (*(code *)this_01->klass[1]._0.methods)(this_01,*ppDVar5,this_01->klass[1]._0.nestedTypes);
    cloneBookkeeping = (CloneBookkeeping *)((uint)cloneBookkeeping & 0xffffff);
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                             (int)&cloneBookkeeping + 3);
    pMVar6 = method;
    if (method != (MethodInfo *)0x0) {
      this_02 = (Dictionary_2_System_Object_System_Object_ *)&stack0xfffffffc;
      pOVar7 = (Object *)func_?();
      if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (this_02,pOVar2,pOVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        this_03 = (MVGamePointChest *)((int)&this + 3);
        this = (MVGamePointChest *)CONCAT13(1,this._0_3_);
        pOVar2 = (Object *)func_?();
        pOVar7 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar2,pOVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        if ((this_01[1].monitor == (MonitorData *)0xffffffff) &&
           (worldObjects == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            method = (MethodInfo *)&UNK_?;
            func_?();
          }
          method = (MethodInfo *)StringLiteral_This_is_a_hack_created_for_spawn;
          prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_This_is_a_hack_created_for_spawn,(MethodInfo *)0x0);
          this._0_3_ = CONCAT12(9,this._0_2_);
          method = (MethodInfo *)TypeInfo__MV__WorldObject__WorldObjectDataParameters;
          prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
          pOVar2 = (Object *)func_?();
          prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&stack0xfffffff4;
          worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)TypeInfo__System__Int32;
          cloneBookkeeping = (CloneBookkeeping *)&UNK_?;
          cloneGroupId = func_?();
          cloneBookkeeping =
               (CloneBookkeeping *)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
          ;
          pMVar8 = (MVGamePointChest *)&UNK_?;
          this = this_03;
          ownerActorNumber = (int32_t)pOVar2;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar2,
                     (Object *)cloneGroupId,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          this_03 = pMVar8;
        }
        else {
          this._0_3_ = CONCAT12(9,this._0_2_);
          method = (MethodInfo *)TypeInfo__MV__WorldObject__WorldObjectDataParameters;
          prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
          key = (CloneBookkeeping *)func_?();
          prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&stack0xfffffff4;
          worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)TypeInfo__System__Int32;
          cloneBookkeeping = (CloneBookkeeping *)&UNK_?;
          worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)func_?();
          prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
          ;
          ownerActorNumber = (int32_t)&UNK_?;
          cloneGroupId = (int32_t)this_03;
          cloneBookkeeping = key;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)key,
                     (Object *)worldObjects,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        this._0_3_ = CONCAT12(2,this._0_2_);
        pOVar2 = (Object *)func_?();
        pOVar7 = (Object *)func_?();
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
        method = (MethodInfo *)this_03;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar2,pOVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        prototypes_00 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
        this._0_2_ = CONCAT11(10,this._0_1_);
        pOVar2 = (Object *)func_?();
        method = (MethodInfo *)TypeInfo__System__Int32;
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
        pOVar7 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar2,pOVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pMVar9 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                           ((Dictionary_2_System_Object_System_Object_ *)this_03,
                            (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&stack0xfffffff0,
                            (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)prototypes_00,
                            (MethodInfo *)0x0);
        if ((pMVar9 != (MVWorldObjectClient *)0x0) &&
           ((Dictionary_2_System_Int32_System_Int32_ *)(pMVar6->field7_0x1c).methodMetadataHandle !=
            (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__Add
                    ((Dictionary_2_System_Int32_System_Int32_ *)
                     (pMVar6->field7_0x1c).methodMetadataHandle,(this_01->fields).cloneIdIncrement,
                     (pMVar9->fields)._.id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_AddCloneToWorldObjects(pMVar1,pMVar9,(MethodInfo *)0x0);
            MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetLinksForClone
                      ((MVWorldObject *)this_01,(List_1_System_Int32_ *)pMVar6->return_type,
                       (MethodInfo *)0x0);
            MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetObjectLinksForClone
                      ((MVWorldObject *)this_01,(List_1_System_Int32_ *)pMVar6->parameters,
                       (MethodInfo *)0x0);
            pMVar6->invoker_method = pMVar6->invoker_method + 1;
            return pMVar9;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pMVar9 = (MVWorldObjectClient *)(*pcVar10)();
  return pMVar9;
}


/* MVWorldObject DeepCopy() */

MVWorldObject *
Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_DeepCopy
          (MVGamePointChest *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._GameCoinManager_k__BackingField,
     this_00 != (MVGameCoinManager *)0x0)) {
    MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor(this_00,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = &stack0xfffffffc;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                     );
      func_?(&TypeInfo__MV__WorldObject__Link);
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__
                     );
      func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
      cRam_? = '\x01';
    }
    pMStack_2 = (MVWorldObject *)
                 (**(code **)(*in_stack_3 + 0x168))
                           (in_stack_3,*(undefined4 *)(*in_stack_3 + 0x16c));
    pLVar4 = (List_1_MV_WorldObject_Link_ *)
             func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
    if (pMStack_2 != (MVWorldObject *)0x0) {
      pRVar5 = (RegexCharClass_SingleRange__Array *)&(pMStack_2->fields).outputLinkRefs;
      *(List_1_MV_WorldObject_Link_ **)pRVar5 = pLVar4;
      pRStack_6 = pRVar5;
      func_?();
      pMVar7 = (MethodInfo *)in_stack_3[6];
      if (pMVar7 != (MethodInfo *)0x0) {
        pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_9,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            pMVar7,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                           );
        LStack_10._list = (List_1_System_Object_ *)pLVar8->_list;
        LStack_10._index = pLVar8->_index;
        LStack_10._version = pLVar8->_version;
        LStack_10._current = *(Object **)&pLVar8->_current;
        LStack_9._version = 0;
        LStack_9._current = (RegexCharClass_SingleRange)&LStack_10;
        while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                       Object]::List_1_T_Enumerator_System_Object__MoveNext
                                 (&LStack_10,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                                 ), bVar11 != 0) {
          pIStack_12 = (Il2CppClass *)pRVar5->klass;
          if ((RegexCharClass_SingleRange)LStack_10._current == (RegexCharClass_SingleRange)0x0)
          goto code_?;
          pRVar5 = *(RegexCharClass_SingleRange__Array **)((int)LStack_10._current + 8);
          pIVar13 = *(Il2CppClass **)((int)LStack_10._current + 0x10);
          pMVar14 = (MethodInfo *)func_?();
          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields *)
          &pMVar14->invoker_method)->_items = (RegexCharClass_SingleRange__Array *)0xffffffff;
          pMVar14->name = (char *)0xffffffff;
          pMVar14->klass = (Il2CppClass *)0xffffffff;
          pMVar15 = pMVar14;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)pMVar14,ExceptionArgument__Enum_obj,pMVar7);
          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields *)
          &pMVar14->invoker_method)->_items = pRVar5;
          pMVar14->name = (char *)pIVar13;
          pMVar14->klass = pIVar13;
          *(char *)&pMVar14->return_type = (char)((uint)pMVar15 >> 0x18);
          if (pIStack_12 == (Il2CppClass *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pIStack_12,(Object *)pMVar14,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                    );
          pRVar5 = pRStack_6;
          pMVar7 = pMVar14;
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_10,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   ,in_stack_16);
        pLVar4 = (List_1_MV_WorldObject_Link_ *)func_?();
        pMVar7 = MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__;
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
        ppLVar17 = &(pMStack_2->fields).inputLinkRefs;
        *ppLVar17 = pLVar4;
        ppLVar18 = ppLVar17;
        func_?();
        if (_UNK_? != (MethodInfo *)0x0) {
          pMVar15 = _UNK_?;
          pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             (&LStack_9,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              _UNK_?,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                             );
          LStack_10._list = (List_1_System_Object_ *)pLVar8->_list;
          LStack_10._index = pLVar8->_index;
          LStack_10._version = pLVar8->_version;
          LStack_10._current = *(Object **)&pLVar8->_current;
          LStack_9._version = 0;
          LStack_9._current = (RegexCharClass_SingleRange)&LStack_10;
          while( true ) {
            bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_10,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                              );
            if (bVar11 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&LStack_10,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                         ,pMVar7);
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              pDVar19 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                        (pDVar19,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              pDVar20 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                       HashtableFunctions_DeepCopyHashTable
                                 ((Dictionary_2_System_Object_System_Object_ *)&LStack_10,
                                  (Dictionary_2_System_Object_System_Object_ *)pDVar19,
                                  (MethodInfo *)0x0);
              (pMStack_2->fields).data = pDVar20;
              func_?();
              pDVar20 = _UNK_?;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              pDVar19 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                        (pDVar19,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              pDVar20 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                       HashtableFunctions_DeepCopyHashTable
                                 (pDVar20,(Dictionary_2_System_Object_System_Object_ *)pDVar19,
                                  (MethodInfo *)0x0);
              (pMStack_2->fields).runTimeData = pDVar20;
              func_?();
              *unaff_FS_OFFSET = pMVar15;
              return pMStack_2;
            }
            pLVar4 = *ppLVar17;
            if ((RegexCharClass_SingleRange)LStack_10._current == (RegexCharClass_SingleRange)0x0)
            break;
            pRStack_6 = *(RegexCharClass_SingleRange__Array **)((int)LStack_10._current + 8);
            pIStack_12 = *(Il2CppClass **)((int)LStack_10._current + 0x10);
            value = (MethodInfo *)func_?();
            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields *)
            &value->invoker_method)->_items = (RegexCharClass_SingleRange__Array *)0xffffffff;
            value->name = (char *)0xffffffff;
            value->klass = (Il2CppClass *)0xffffffff;
            pMVar14 = value;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)value,ExceptionArgument__Enum_obj,pMVar15);
            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields *)
            &value->invoker_method)->_items = pRStack_6;
            value->name = (char *)pIStack_12;
            value->klass = pIStack_12;
            *(char *)&value->return_type = (char)((uint)pMVar14 >> 0x18);
            if (pLVar4 == (List_1_MV_WorldObject_Link_ *)0x0) break;
            ppLVar17 = ppLVar18;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar4,(Object *)value,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                      );
            ppLVar18 = ppLVar17;
            pMVar15 = value;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  pMVar22 = (MVWorldObject *)(*pcVar21)();
  return pMVar22;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Destroy
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields)._GameCoinManager_k__BackingField,
     this_00 == (MVGameCoinManager *)0x0)) {
code_?:
    func_?();
  }
  else {
    MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor(this_00,(MethodInfo *)0x0);
    pUVar2 = (this->fields).useInteractor;
    ppUVar3 = &(this->fields).useInteractor;
    if (pUVar2 != (UseInteractor *)0x0) {
      pMVar4 = (this->fields).chestObject;
      if (pMVar4 != (MVGamePointChestObject *)0x0) {
        pTVar5 = (pMVar4->fields).triggerBoxEvents;
        pEVar6 = (EventHandler_1_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar6,(Object *)pUVar2,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar5 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                    (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pEVar6,(MethodInfo *)0x0);
          pMVar4 = (this->fields).chestObject;
          if (pMVar4 != (MVGamePointChestObject *)0x0) {
            pTVar5 = (pMVar4->fields).triggerBoxEvents;
            pUVar2 = *ppUVar3;
            pEVar6 = (EventHandler_1_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar6,(Object *)pUVar2,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar5 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                        (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pEVar6,(MethodInfo *)0x0);
              if (*ppUVar3 != (UseInteractor *)0x0) {
                UseInteractor::UseInteractor_OnDestroy
                          (*ppUVar3,(this->fields)._._._._.data,(MethodInfo *)0x0);
                *ppUVar3 = (UseInteractor *)0x0;
                func_?(ppUVar3,0);
                goto code_?;
              }
            }
          }
        }
      }
      goto code_?;
    }
code_?:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    pAVar7 = TypeInfo__System__Action<IWinningCondition>;
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    source = (pMVar1->fields).OnWinningConditionFulfilled;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,
               MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
      (pAVar7->_1).naturalAligment = 0;
      (pAVar7->_1).packingSize = 0;
      *(undefined2 *)&(pAVar7->_1).field_0x56 = 0;
code_?:
      func_?();
code_?:
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePointAmountManager);
        cRam_? = '\x01';
      }
      woid = (this->fields)._._._._.id;
      if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__GamePointAmountManager);
      }
      GamePointAmountManager::GamePointAmountManager_UpdateRewardData(woid,0,(MethodInfo *)0x0);
      MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
      return;
    }
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    (pAVar7->_1).naturalAligment = (char)iVar9;
    (pAVar7->_1).packingSize = (char)((uint)iVar9 >> 8);
    *(short *)&(pAVar7->_1).field_0x56 = (short)((uint)iVar9 >> 0x10);
    iVar9 = func_?();
    if (iVar9 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Disable
               (MVGamePointChest *this,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  (this->fields).state = 2;
  if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
     (this_00 = (pMVar1->fields).modelSelector, this_00 != (GamePointChestModelController *)0x0)) {
    GamePointChestModelController::GamePointChestModelController_Disable(this_00,(MethodInfo *)0x0);
    (this->fields).canRespawn = 0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVGamePointChest *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  fVar4 = (float)uVar2 * _UNK_?;
  fVar5 = (float)uVar3 * _UNK_?;
  fVar6 = (pVVar1->oneVector).z * _UNK_?;
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      uVar7 = 0;
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
      fVar4 = pQVar8->z;
      fVar5 = pQVar8->w;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = 0.0;
      rotation.x = fVar6;
      rotation.z = fVar4;
      rotation.w = fVar5;
      scale.y = (float)uVar7;
      scale.x = (float)this_01;
      scale.z = fVar6;
      pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar5 = pVVar9->y;
      fVar4 = pVVar9->z;
      __return_storage_ptr__->x = pVVar9->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?(fVar4,fVar5);
  pcVar10 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar10)();
  return pVVar9;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVGamePointChest *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
     (pTVar2 = (pMVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pTVar2,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                          ((Vector3 *)&puStack_5,pTVar3,(MethodInfo *)0x0);
      uVar6 = pVVar4->y;
      fVar7 = pVVar4->z;
      pMVar1 = (this->fields).chestObject;
      if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
         (pTVar2 = (pMVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          uVar8 = 0;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                              ((Vector3 *)&puStack_5,pTVar3,(MethodInfo *)0x0);
          fVar9 = _UNK_?;
          (__return_storage_ptr__->m_Center).x = (float)uVar8;
          (__return_storage_ptr__->m_Center).y = (float)uVar6;
          uVar10 = pVVar4->x;
          uVar11 = pVVar4->y;
          fVar12 = pVVar4->z;
          (__return_storage_ptr__->m_Center).z = fVar7;
          (__return_storage_ptr__->m_Extents).x = (float)uVar10 * fVar9;
          (__return_storage_ptr__->m_Extents).y = (float)uVar11 * fVar9;
          (__return_storage_ptr__->m_Extents).z = fVar12 * fVar9;
          return __return_storage_ptr__;
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pBVar14 = (Bounds *)(*pcVar13)();
  return pBVar14;
}


/* Boolean HandleDifferentChestSizeStages(Single) */

bool Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_HandleDifferentChestSizeStages
               (MVGamePointChest *this,float percentage,MethodInfo *method)

{
  if (percentage * _UNK_? < (float)(this->fields).gamePointsRewarded) {
    return 0;
  }
  this_00 = (this->fields)._._._.transform;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  if (this_00 != (Transform *)0x0) {
    value.y = (float)uVar3 * percentage;
    value.x = (float)uVar2 * percentage;
    value.z = (pVVar1->oneVector).z * percentage;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,value,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void HandleStandaloneDisabling() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_HandleStandaloneDisabling
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      pMVar2 = (this->fields).chestObject;
      (this->fields).state = 2;
      if ((pMVar2 == (MVGamePointChestObject *)0x0) ||
         (this_00 = (pMVar2->fields).modelSelector, this_00 == (GamePointChestModelController *)0x0)
         ) goto code_?;
      GamePointChestModelController::GamePointChestModelController_Disable
                (this_00,(MethodInfo *)0x0);
      (this->fields).canRespawn = 0;
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Initialize
               (MVGamePointChest *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_);
    cRam_? = '\x01';
  }
  MVGamePointChest_UpdateGamePointsRewardedAmount(this,(MethodInfo *)0x0);
  MVGamePointChest_UpdateChestSize(this,(MethodInfo *)0x0);
  MVGamePointChest_SetupUseInteractor(this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  if (this_00 == (UseInteractor *)0x0) {
code_?:
    func_?();
  }
  else {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._._.data,(MethodInfo *)0x0);
    this = (MVGamePointChest *)0x0;
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this_01,(MethodInfo *)0x0);
    pMVar1 = (this_01->fields).chestObject;
    if (pMVar1 == (MVGamePointChestObject *)0x0) goto code_?;
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this_01,(pMVar1->fields).visualObject,5.0,(MethodInfo *)0x0);
    MVGamePointChest_HandleStandaloneDisabling(this_01,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    this = (MVGamePointChest *)pMVar2;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pAStack3 = TypeInfo__System__Action<IWinningCondition>;
    pAVar4 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)this_01,
               MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar4,(Delegate *)this_02,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
    if (unaff_ESI == (Delegate *)0x0) {
      (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      pAStack5 = (Action_1_IWinningCondition___Class *)0x0;
code_?:
      pDStack6 = (Delegate *)&(pMVar2->fields).OnWinningConditionFulfilled;
      func_?();
      MVGamePointChest_UpdateCanRespawn(this_01,(this_01->fields)._._._._.data,(MethodInfo *)0x0);
      return;
    }
    pAStack5 = TypeInfo__System__Action<IWinningCondition>;
    pDStack6 = unaff_ESI;
    pAVar4 = (Action_1_IWinningCondition_ *)func_?();
    if (pAVar4 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    unaff_EDI = (Action_1_IWinningCondition___Class *)&(pMVar2->fields).OnWinningConditionFulfilled;
    *(Action_1_IWinningCondition_ **)unaff_EDI = pAVar4;
    pAStack5 = TypeInfo__System__Action<IWinningCondition>;
    this = (MVGamePointChest *)TypeInfo__System__Action<IWinningCondition>;
    pDStack6 = unaff_ESI;
    pAStack5 = (Action_1_IWinningCondition___Class *)func_?();
    if (pAStack5 != (Action_1_IWinningCondition___Class *)0x0) goto code_?;
  }
  pAStack5 = (Action_1_IWinningCondition___Class *)this;
  pDStack6 = unaff_ESI;
  func_?();
code_?:
  pDStack6 = unaff_ESI;
  pAStack5 = unaff_EDI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_InitializeInventory
               (MVGamePointChest *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).chestObject;
  if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
     ((pMVar1->fields).modelSelector != (GamePointChestModelController *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__MainColor,unaff_retaddr);
      cRam_? = '\x01';
    }
    if (*(GameObject **)(in_stack_2 + 0x14) != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(in_stack_2 + 0x14),0,(MethodInfo *)0x0);
      if (*(GameObject **)(in_stack_2 + 0x10) != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(in_stack_2 + 0x10),1,(MethodInfo *)0x0);
        *(undefined1 *)(in_stack_2 + 0x2d) = 0;
        if (*(Renderer **)(in_stack_2 + 0x1c) != (Renderer *)0x0) {
          pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (*(Renderer **)(in_stack_2 + 0x1c),(MethodInfo *)0x0);
          if (pMVar3 != (Material *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                               ((Vector4 *)&stack0xffffffe4,pMVar3,StringLiteral__MainColor,
                                (MethodInfo *)0x0);
            fVar5 = pVVar4->x;
            fVar6 = pVVar4->y;
            fVar7 = pVVar4->z;
            if (*(Renderer **)(in_stack_2 + 0x1c) != (Renderer *)0x0) {
              pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                 (*(Renderer **)(in_stack_2 + 0x1c),(MethodInfo *)0x0);
              if (pMVar3 != (Material *)0x0) {
                value.y = fVar6;
                value.x = fVar5;
                value.z = fVar7;
                value.w = 1.0;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                          (pMVar3,StringLiteral__MainColor,value,(MethodInfo *)0x0);
                if (*(GreyOutObjectScript **)(in_stack_2 + 0x20) !=
                    (GreyOutObjectScript *)0x0) {
                  GreyOutObjectScript::GreyOutObjectScript_GreyIn
                            (*(GreyOutObjectScript **)(in_stack_2 + 0x20),(MethodInfo *)0x0);
                  if (*(Component **)(in_stack_2 + 0x20) != (Component *)0x0) {
                    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject
                                        (*(Component **)(in_stack_2 + 0x20),(MethodInfo *)0x0
                                        );
                    if (this_00 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (this_00,1,(MethodInfo *)0x0);
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
    func_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsUsable(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_IsUsable
               (MVGamePointChest *this,int32_t id,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  return (this->fields).state == 0;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_OnDataUpdate
               (MVGamePointChest *this,MethodInfo *method)

{
  MVGamePointChest_UpdateGamePointsRewardedAmount(this,(MethodInfo *)0x0);
  MVGamePointChest_UpdateChestSize(this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._._.data,(MethodInfo *)0x0);
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
              ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
    MVGamePointChest_UpdateCanRespawn(this,(this->fields)._._._._.data,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_OnUpdate
               (MVGamePointChest *this,MethodInfo *method)

{
  if ((this->fields).state != 1) {
code_?:
    if (((this->fields).canRespawn != 0) && ((this->fields).state == 2)) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((float)(this->fields).respawnTime + (this->fields).pickUpTime < fVar1) {
        pIStack2 = (this->klass->vtable).OnObjectLinkChanged.methodPtr;
        (*(code *)(this->klass->vtable).Reset.method)();
      }
    }
    return;
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_02 != (MVLocalPlayer *)0x0) {
    MVPlayer::MVPlayer_get_WoId((MVPlayer *)this_02,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar3 = (this->fields).chestObject;
    if ((pMVar3 != (MVGamePointChestObject *)0x0) &&
       (this_00 = (pMVar3->fields).modelSelector, this_00 != (GamePointChestModelController *)0x0))
    {
      GamePointChestModelController::GamePointChestModelController_Open(this_00,(MethodInfo *)0x0);
      pMVar3 = (this->fields).chestObject;
      if (pMVar3 != (MVGamePointChestObject *)0x0) {
        pAVar4 = (pMVar3->fields).audioSource;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pAVar4,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          pMVar3 = (this->fields).chestObject;
          if ((pMVar3 == (MVGamePointChestObject *)0x0) ||
             (pAVar4 = (pMVar3->fields).audioSource, pAVar4 == (AudioSource *)0x0))
          goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                    (pAVar4,(MethodInfo *)0x0);
        }
        pMVar3 = (this->fields).chestObject;
        if ((pMVar3 != (MVGamePointChestObject *)0x0) &&
           (this_01 = (pMVar3->fields).particles, this_01 != (ObjectParticleEmitterScript *)0x0)) {
          ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_01,(MethodInfo *)0x0);
          (this->fields).state = 2;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean OpenChest(Int32) */

bool Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_OpenChest
               (MVGamePointChest *this,int32_t instigatorID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).chestObject;
  if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
     (this_00 = (pMVar1->fields).modelSelector, this_00 != (GamePointChestModelController *)0x0)) {
    GamePointChestModelController::GamePointChestModelController_Open(this_00,(MethodInfo *)0x0);
    pMVar1 = (this->fields).chestObject;
    if (pMVar1 != (MVGamePointChestObject *)0x0) {
      pAVar2 = (pMVar1->fields).audioSource;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pAVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields).chestObject;
        if ((pMVar1 == (MVGamePointChestObject *)0x0) ||
           (pAVar2 = (pMVar1->fields).audioSource, pAVar2 == (AudioSource *)0x0))
        goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                  (pAVar2,(MethodInfo *)0x0);
      }
      pMVar1 = (this->fields).chestObject;
      if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
         (this_01 = (pMVar1->fields).particles, this_01 != (ObjectParticleEmitterScript *)0x0)) {
        ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_01,(MethodInfo *)0x0);
        (this->fields).state = 2;
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Reset
               (MVGamePointChest *this,MethodInfo *method)

{
  iVar1 = (this->fields).state;
  if ((iVar1 == 2) || (iVar1 == 1)) {
    pMVar2 = (this->fields).chestObject;
    if ((pMVar2 == (MVGamePointChestObject *)0x0) ||
       (this_00 = (pMVar2->fields).modelSelector, this_00 == (GamePointChestModelController *)0x0))
    {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    GamePointChestModelController::GamePointChestModelController_Close(this_00,(MethodInfo *)0x0);
    (this->fields).state = 0;
  }
  MVGamePointChest_HandleStandaloneDisabling(this,(MethodInfo *)0x0);
  return;
}


/* Void SetToClosed() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_SetToClosed
               (MVGamePointChest *this,MethodInfo *method)

{
  iVar1 = (this->fields).state;
  if ((iVar1 == 2) || (iVar1 == 1)) {
    pMVar2 = (this->fields).chestObject;
    if ((pMVar2 == (MVGamePointChestObject *)0x0) ||
       (this_00 = (pMVar2->fields).modelSelector, this_00 == (GamePointChestModelController *)0x0))
    {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    GamePointChestModelController::GamePointChestModelController_Close(this_00,(MethodInfo *)0x0);
    (this->fields).state = 0;
  }
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_SetupUseInteractor
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    func_?(&TypeInfo__LevelBasedUseRequirement);
    func_?(&MethodInfo__MVGamePointChest__IsUsable_int__MVInteractableBase_);
    func_?(&MethodInfo__MVGamePointChest__OpenChest_int_);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).chestObject;
  if (pMVar1 != (MVGamePointChestObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar2,(MethodInfo *)0x0);
      this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_00,(Object *)this,MethodInfo__MVGamePointChest__OpenChest_int_,
                 (MethodInfo *)0x0);
      this_01 = (Func_3_Int32_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVGamePointChest__IsUsable_int__MVInteractableBase_,(MethodInfo *)0x0);
      pUVar3 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar3,(MVWorldObjectClient *)0x40200000,(GameObject *)0x0,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)this_00,
                 (Func_3_Int32_MVInteractableBase_Boolean_ *)this_01,2.5,0,(MethodInfo *)0x0);
      pURam40200108 = pUVar3;
      func_?();
      if (iRam_? != 0) {
        root = *(GameObject **)(iRam_? + 0x2c);
        this_02 = (LevelBasedUseRequirement *)func_?(TypeInfo__LevelBasedUseRequirement);
        LevelBasedUseRequirement::LevelBasedUseRequirement__ctor(this_02,root,0,(MethodInfo *)0x0);
        if (pURam40200108 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement
                    (pURam40200108,(UseRequirement *)this_02,(MethodInfo *)0x0);
          pUVar3 = pURam40200108;
          if (iRam_? != 0) {
            pTVar2 = *(TriggerBoxEvents **)(iRam_? + 0x20);
            pEVar4 = (EventHandler_1_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar4,(Object *)pUVar3,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar4,(MethodInfo *)0x0);
              pUVar3 = pURam40200108;
              if (iRam_? != 0) {
                pTVar2 = *(TriggerBoxEvents **)(iRam_? + 0x20);
                pEVar4 = (EventHandler_1_Object_ *)
                         func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                          (pEVar4,(Object *)pUVar3,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar2 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                            (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar4,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateCanRespawn(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_UpdateCanRespawn
               (MVGamePointChest *this,Dictionary_2_System_Object_System_Object_ *newData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_respawnTime);
    cRam_? = '\x01';
  }
  if (newData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newData,
                       (Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    (this->fields).canRespawn = bVar1;
    if (bVar1 != 0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newData,
                         (Object *)StringLiteral_respawnTime,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar3 = (int32_t *)func_?();
      (this->fields).respawnTime = *piVar3;
    }
    pMVar4 = (this->fields).chestObject;
    if ((pMVar4 != (MVGamePointChestObject *)0x0) &&
       (pGVar5 = (pMVar4->fields).modelSelector, pGVar5 != (GamePointChestModelController *)0x0)) {
      (pGVar5->fields).shouldGreyOut = (this->fields).canRespawn;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateChestSize() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_UpdateChestSize
               (MVGamePointChest *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  while (fStack_1 * _UNK_? < (float)(this->fields).gamePointsRewarded) {
    fStack_1 = fStack_1 + _UNK_?;
    if (_UNK_? < fStack_1) {
      return;
    }
  }
  this_00 = (this->fields)._._._.transform;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = (pVVar2->oneVector).x;
  uVar4 = (pVVar2->oneVector).y;
  if (this_00 != (Transform *)0x0) {
    value.y = (float)uVar4 * fStack_1;
    value.x = (float)uVar3 * fStack_1;
    value.z = (pVVar2->oneVector).z * fStack_1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateGamePointsRewardedAmount() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_UpdateGamePointsRewardedAmount
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_gamePointAmount);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._._._._.data;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      (this->fields).gamePointsRewarded = 0x1e;
      return;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._._.data;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)StringLiteral_gamePointAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index != 0) {
        TStack4.m_Index = (int32_t)TypeInfo__System__Int32;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          TStack4 = TVar3;
          piVar5 = (int32_t *)func_?();
          (this->fields).gamePointsRewarded = *piVar5;
          return;
        }
        goto code_?;
      }
    }
  }
  TStack4.m_Index = (int32_t)&UNK_?;
  func_?();
  TStack4.m_Index = (int32_t)extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVGamePointChest() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGamePointChest);
    cRam_? = '\x01';
  }
  TypeInfo__MVGamePointChest->static_fields->purchaseOptions = 0xc;
  return;
}


/* MVGamePointChest(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest__ctor
               (MVGamePointChest *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__MVGamePointChestObject);
    func_?(&
                    MethodInfo__MVGamePointChest__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_A_TriggerBoxEvents_object_is_mis);
    cRam_? = '\x01';
  }
  (this->fields).gamePointsRewarded = 0x1e;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
code_?:
    func_?();
    pMVar2 = extraout_EDX;
  }
  else {
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,(pPVar1->fields).gamePointChestPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x8000;
    pMVar2 = (MVGamePointChestObject *)(this->fields)._._._.component;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    puVar4 = (uint *)((int)&(this->fields)._._._.interactionFlags + 4);
    *puVar4 = *puVar4 | 1;
    *(int *)&(this->fields)._._._.interactionFlags = (int)(this->fields)._._._.interactionFlags;
    if (pMVar2 == (MVGamePointChestObject *)0x0) {
      (this->fields).chestObject = (MVGamePointChestObject *)0x0;
code_?:
      ppMVar5 = &(this->fields).chestObject;
      func_?(ppMVar5);
      if (*ppMVar5 != (MVGamePointChestObject *)0x0) {
        pTVar6 = ((*ppMVar5)->fields).triggerBoxEvents;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pTVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          pTVar8 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
          if (pTVar8 != (Type *)0x0) {
            pSVar9 = (String *)
                     (*(code *)(pTVar8->klass->vtable).__unknown.method)
                               (pTVar8,(pTVar8->klass->vtable).get_DeclaringType.methodPtr);
            pSVar9 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar9,
                                (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)pSVar9,(MethodInfo *)0x0);
            MVGamePointChest_UpdateCanRespawn(this,(this->fields)._._._._.data,(MethodInfo *)0x0);
            return;
          }
        }
        else if (*ppMVar5 != (MVGamePointChestObject *)0x0) {
          pTVar6 = ((*ppMVar5)->fields).triggerBoxEvents;
          this_00 = (EventHandler_1_Object_ *)
                    func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    (this_00,(Object *)this,
                     MethodInfo__MVGamePointChest__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (pTVar6 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar6,(EventHandler_1_TriggerEventArgs_ *)this_00,(MethodInfo *)0x0);
            MVGamePointChest_UpdateCanRespawn(this,(this->fields)._._._._.data,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    bVar10 = (TypeInfo__MVGamePointChestObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment < bVar10) ||
       ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy[bVar10 - 1] !=
        (Il2CppClass *)TypeInfo__MVGamePointChestObject)) goto code_?;
    (this->fields).chestObject = pMVar2;
    bVar10 = (TypeInfo__MVGamePointChestObject->_1).naturalAligment;
    if ((bVar10 <= (((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy[bVar10 - 1] ==
        (Il2CppClass *)TypeInfo__MVGamePointChestObject)) goto code_?;
  }
  func_?(pMVar2);
  pMVar2 = extraout_EDX_00;
code_?:
  func_?(pMVar2);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_get_DocumentationType
          (MVGamePointChest *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_GamePointChest;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_get_Visible
               (MVGamePointChest *this,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if (((pMVar1 != (MVGamePointChestObject *)0x0) &&
      (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GamePointChestModelController *)0x0)) &&
     (this_00 = (pGVar2->fields).openMesh, this_00 != (GameObject *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (this_00,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
    if ((pGVar2->fields).closedMesh != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      bVar3 = (*pcRam_?)();
      return bVar3;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
  return bVar3;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_set_Visible
               (MVGamePointChest *this,bool value,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if ((this->fields).state == 0) {
    if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
       (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GamePointChestModelController *)0x0)) {
      GamePointChestModelController::GamePointChestModelController_Close(pGVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
          (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GamePointChestModelController *)0x0))
  {
    GamePointChestModelController::GamePointChestModelController_Open(pGVar2,(MethodInfo *)0x0);
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_triggerBoxEvents_TriggerEnter
               (MVGamePointChest *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGamePointChest);
    cRam_? = '\x01';
  }
  if ((this->fields).state == 0) {
    this_00 = (this->fields).useInteractor;
    if (this_00 == (UseInteractor *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UVar2 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
    if ((TypeInfo__MVGamePointChest->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVGamePointChest);
    }
    if ((TypeInfo__MVGamePointChest->static_fields->purchaseOptions & UVar2) == 0) {
      (this->fields).state = 1;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((e == (TriggerEventArgs *)0x0) || (this_01 == (MVNetworkGame_OperationRequests *)0x0))
      goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                (this_01,(this->fields)._._._._.id,(e->fields).instigatorWOID,(MethodInfo *)0x0);
      FakeGamePointGainEffectManager::FakeGamePointGainEffectManager_FakeGainEffect
                ((this->fields).gamePointsRewarded,(MethodInfo *)0x0);
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).pickUpTime = fVar3;
    }
  }
  return;
}

