
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
             (*(code *)cloneBookkeeping->klass[1]._0.fields)
                       (cloneBookkeeping,cloneBookkeeping->klass[1]._0.events);
    pDVar3 = (Dictionary_2_System_Int32_System_Int32_ *)
             ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       (pOVar2,(MethodInfo *)0x0);
    if ((pDVar3 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) ||
       (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= (pDVar3->klass->_1).typeHierarchyDepth &&
        ((Dictionary_2_System_Object_System_Object___Class *)
         (pDVar3->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth - 1] ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
      this_01[2].fields.worldObjectIdsMaps = pDVar3;
      func_?(&this_01[2].fields.worldObjectIdsMaps,pDVar3);
      this_02 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                MVWorldObject_DeepCopyWorldObjectDataParameters
                          ((MVWorldObject *)this_01,(MethodInfo *)0x0);
      (*(code *)this_01->klass[1]._0.properties)
                (this_01,this_01[2].fields.worldObjectIdsMaps,this_01->klass[1]._0.methods);
      cloneBookkeeping = (CloneBookkeeping *)((uint)cloneBookkeeping & 0xffffff);
      func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                      (int)&cloneBookkeeping + 3);
      pMVar4 = method;
      if (method != (MethodInfo *)0x0) {
        key_00 = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel___Class *)&UNK_?;
        pOVar2 = (Object *)func_?();
        if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (this_02,(Object *)key_00,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          this_03 = (MVGamePointChest *)((int)&this + 3);
          this = (MVGamePointChest *)CONCAT13(1,this._0_3_);
          pOVar2 = (Object *)func_?();
          pOVar5 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar2,pOVar5,
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
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)StringLiteral_This_is_a_hack_created_for_spawn,(MethodInfo *)0x0);
            this._0_3_ = CONCAT12(9,this._0_2_);
            method = (MethodInfo *)TypeInfo__MV__WorldObject__WorldObjectDataParameters;
            prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
            pOVar2 = (Object *)func_?();
            prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&stack0xfffffff8;
            worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)TypeInfo__System__Int32
            ;
            cloneBookkeeping = (CloneBookkeeping *)&UNK_?;
            cloneGroupId = func_?();
            cloneBookkeeping =
                 (CloneBookkeeping *)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
            ;
            pMVar6 = (MVGamePointChest *)&UNK_?;
            this = this_03;
            ownerActorNumber = (int32_t)pOVar2;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar2,
                       (Object *)cloneGroupId,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            this_03 = pMVar6;
          }
          else {
            this._0_3_ = CONCAT12(9,this._0_2_);
            method = (MethodInfo *)TypeInfo__MV__WorldObject__WorldObjectDataParameters;
            prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
            key = (CloneBookkeeping *)func_?();
            prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&stack0xfffffff8;
            worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)TypeInfo__System__Int32
            ;
            cloneBookkeeping = (CloneBookkeeping *)&UNK_?;
            worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)func_?();
            prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
            ;
            ownerActorNumber = (int32_t)&UNK_?;
            cloneGroupId = (int32_t)this_03;
            cloneBookkeeping = key;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)key,
                       (Object *)worldObjects,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          this._0_3_ = CONCAT12(2,this._0_2_);
          pOVar2 = (Object *)func_?();
          pOVar5 = (Object *)func_?();
          prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
          method = (MethodInfo *)this_03;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar2,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          prototypes_00 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
          this._0_2_ = CONCAT11(10,this._0_1_);
          pOVar2 = (Object *)func_?();
          method = (MethodInfo *)TypeInfo__System__Int32;
          prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?;
          pOVar5 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar2,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          pMVar7 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                             ((Dictionary_2_System_Object_System_Object_ *)this_03,
                              (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&stack0xfffffff0,
                              (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)prototypes_00,
                              (MethodInfo *)0x0);
          if ((pMVar7 != (MVWorldObjectClient *)0x0) &&
             ((Dictionary_2_System_Object_System_Object_ *)
              (pMVar4->field7_0x1c).methodMetadataHandle !=
              (Dictionary_2_System_Object_System_Object_ *)0x0)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)
                       (pMVar4->field7_0x1c).methodMetadataHandle,
                       (Object *)(this_01->fields).cloneIdIncrement,(Object *)(pMVar7->fields)._.id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                      );
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar1 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_AddCloneToWorldObjects(pMVar1,pMVar7,(MethodInfo *)0x0);
              MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetLinksForClone
                        ((MVWorldObject *)this_01,(List_1_System_Int32_ *)pMVar4->return_type,
                         (MethodInfo *)0x0);
              MVWorldObject.dll::MV::WorldObject::MVWorldObject::
              MVWorldObject_GetObjectLinksForClone
                        ((MVWorldObject *)this_01,(List_1_System_Int32_ *)pMVar4->parameters,
                         (MethodInfo *)0x0);
              pMVar4->invoker_method = pMVar4->invoker_method + 1;
              return pMVar7;
            }
          }
        }
      }
    }
    else {
      func_?(pDVar3,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
    }
  }
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pMVar7 = (MVWorldObjectClient *)(*pcVar8)();
  return pMVar7;
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
    *unaff_FS_OFFSET = (RegexCharClass_SingleRange)&stack0xfffffffc;
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
    LStack_2._list = (List_1_System_Object_ *)0x0;
    LStack_2._index = 0;
    LStack_2._version = 0;
    LStack_2._current = (Object *)0x0;
    LStack_3._list = (List_1_System_Object_ *)0x0;
    LStack_3._index = 0;
    LStack_3._version = 0;
    LStack_3._current = (Object *)0x0;
    pMVar4 = (MVWorldObject *)
             (**(code **)(*in_stack_5 + 0x16c))
                       (in_stack_5,*(undefined4 *)(*in_stack_5 + 0x170));
    pMStack_6 = pMVar4;
    pLVar7 = (List_1_MV_WorldObject_Link_ *)
             func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
    if (pLVar7 != (List_1_MV_WorldObject_Link_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar7,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
      if (pMVar4 != (MVWorldObject *)0x0) {
        (pMVar4->fields).outputLinkRefs = pLVar7;
        func_?();
        pMVar8 = (MethodInfo *)in_stack_5[6];
        if (pMVar8 != (MethodInfo *)0x0) {
          pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             (&LStack_10,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              pMVar8,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                             );
          LStack_2._list = (List_1_System_Object_ *)pLVar9->_list;
          LStack_2._index = pLVar9->_index;
          LStack_2._version = pLVar9->_version;
          LStack_2._current = *(Object **)&pLVar9->_current;
          LStack_10._version = 0;
          LStack_10._current = (RegexCharClass_SingleRange)&LStack_2;
          while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Object]::List_1_T_Enumerator_System_Object__MoveNext
                                   (&LStack_2,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                                   ), bVar11 != 0) {
            pOStack_12 = (Object__Class *)(pMVar4->fields).outputLinkRefs;
            if ((RegexCharClass_SingleRange)LStack_2._current == (RegexCharClass_SingleRange)0x0)
            goto code_?;
            pRStack_13 = *(RegexCharClass_SingleRange__Array **)((int)LStack_2._current + 8);
            pIStack_14 = *(Il2CppClass **)((int)LStack_2._current + 0x10);
            value = (MethodInfo *)func_?();
            if (value == (MethodInfo *)0x0) goto code_?;
            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields *)
            &value->invoker_method)->_items = (RegexCharClass_SingleRange__Array *)0xffffffff;
            value->name = (char *)0xffffffff;
            value->klass = (Il2CppClass *)0xffffffff;
            pMVar15 = value;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)value,ExceptionArgument__Enum_obj,pMVar8);
            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields *)
            &value->invoker_method)->_items = pRStack_13;
            value->name = (char *)pIStack_14;
            value->klass = pIStack_14;
            *(char *)&value->return_type = (char)((uint)pMVar15 >> 0x18);
            if (pOStack_12 == (Object__Class *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pOStack_12,(Object *)value,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                      );
            pMVar4 = pMStack_6;
            pMVar8 = value;
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_2,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                     ,in_stack_16);
          pLVar7 = (List_1_MV_WorldObject_Link_ *)func_?();
          if (pLVar7 != (List_1_MV_WorldObject_Link_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
            LowLevelList_1_System_Object___ctor
                      ((LowLevelList_1_System_Object_ *)pLVar7,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__
                      );
            (pMVar4->fields).inputLinkRefs = pLVar7;
            func_?();
            if (LStack_10._current != (RegexCharClass_SingleRange)0x0) {
              pMVar8 = 
              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
              ;
              method_00 = LStack_10._current;
              pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                 (&LStack_10,
                                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)LStack_10._current,
                                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                                 );
              LStack_3._list = (List_1_System_Object_ *)pLVar9->_list;
              LStack_3._index = pLVar9->_index;
              LStack_3._version = pLVar9->_version;
              LStack_3._current = *(Object **)&pLVar9->_current;
              LStack_10._version = 0;
              LStack_10._current = (RegexCharClass_SingleRange)&LStack_3;
              while( true ) {
                bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  (&LStack_3,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                                  );
                if (bVar11 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            ((Object *)&LStack_3,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                             ,(MethodInfo *)&UNK_?);
                  pDVar17 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                           HashtableFunctions_DeepCopyHashTable_1
                                     ((Dictionary_2_System_Object_System_Object_ *)method_00,
                                      (MethodInfo *)0x0);
                  (pMVar4->fields).data = pDVar17;
                  func_?();
                  pDVar17 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                           HashtableFunctions_DeepCopyHashTable_1
                                     ((Dictionary_2_System_Object_System_Object_ *)pMVar8,
                                      (MethodInfo *)0x0);
                  (pMVar4->fields).runTimeData = pDVar17;
                  func_?();
                  *unaff_FS_OFFSET = method_00;
                  return pMVar4;
                }
                pRStack_13 = (RegexCharClass_SingleRange__Array *)(pMVar4->fields).inputLinkRefs;
                if ((RegexCharClass_SingleRange)LStack_3._current ==
                    (RegexCharClass_SingleRange)0x0) break;
                pOStack_12 = *(Object__Class **)((int)LStack_3._current + 8);
                pOStack_18 = *(Object__Class **)((int)LStack_3._current + 0x10);
                value_00 = (RegexCharClass_SingleRange)func_?();
                if (value_00 == (RegexCharClass_SingleRange)0x0) break;
                ((Object *)((int)value_00 + 8))->klass = (Object__Class *)0xffffffff;
                *(MonitorData **)((int)value_00 + 0xc) = (MonitorData *)0xffffffff;
                ((Object *)((int)value_00 + 0x10))->klass = (Object__Class *)0xffffffff;
                RVar19 = value_00;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                ((Object *)((int)value_00 + 8))->klass = pOStack_12;
                *(Object__Class **)((int)value_00 + 0xc) = pOStack_18;
                ((Object *)((int)value_00 + 0x10))->klass = pOStack_18;
                *(char *)((int)value_00 + 0x14) = RVar19.Last._1_1_;
                if (pRStack_13 == (RegexCharClass_SingleRange__Array *)0x0) break;
                pMVar8 = 
                MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                ;
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          ((List_1_System_Object_ *)pRStack_13,(Object *)value_00,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                          );
                pMVar4 = pMStack_6;
                method_00 = value_00;
              }
            }
          }
        }
      }
    }
  }
code_?:
  pMStack_6 = (MVWorldObject *)&stack0xfffffff4;
  pMStack_6 = (MVWorldObject *)func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  pMVar4 = (MVWorldObject *)(*pcVar20)();
  return pMVar4;
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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._GameCoinManager_k__BackingField,
     this_00 != (MVGameCoinManager *)0x0)) {
    MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor(this_00,(MethodInfo *)0x0);
    if ((this->fields).useInteractor == (UseInteractor *)0x0) {
code_?:
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) {
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
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pDVar2 = (Delegate *)&UNK_?;
        this_01 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<IWinningCondition>);
        if (this_01 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_,
                     (MethodInfo *)0x0);
          pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                             (pDVar2,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pDVar2 == (Delegate *)0x0) {
            (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
          }
          else {
            pAVar3 = (Action_1_IWinningCondition_ *)func_?();
            if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
            (pMVar1->fields).OnWinningConditionFulfilled = pAVar3;
            iVar4 = func_?();
            if (iVar4 == 0) goto code_?;
          }
          func_?();
          goto code_?;
        }
      }
    }
    else {
      pMVar5 = (this->fields).chestObject;
      if (pMVar5 != (MVGamePointChestObject *)0x0) {
        pTVar6 = (pMVar5->fields).triggerBoxEvents;
        pUVar7 = (this->fields).useInteractor;
        pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        if (pUVar8 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar8,(Object *)pUVar7,
                     MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (pTVar6 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                      (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar8,(MethodInfo *)0x0);
            pMVar5 = (this->fields).chestObject;
            if (pMVar5 != (MVGamePointChestObject *)0x0) {
              pTVar6 = (pMVar5->fields).triggerBoxEvents;
              pUVar7 = (this->fields).useInteractor;
              pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
                       func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              if (pUVar8 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar8,(Object *)pUVar7,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar6 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                            (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pUVar8,(MethodInfo *)0x0);
                  pUVar7 = (this->fields).useInteractor;
                  if (pUVar7 != (UseInteractor *)0x0) {
                    UseInteractor::UseInteractor_OnDestroy
                              (pUVar7,(this->fields)._._._._.data,(MethodInfo *)0x0);
                    (this->fields).useInteractor = (UseInteractor *)0x0;
                    func_?(&(this->fields).useInteractor,0);
                    goto code_?;
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
                         ((Vector3 *)&stack0xffffffe8,pTVar3,(MethodInfo *)0x0);
      fVar5 = pVVar4->z;
      pMVar1 = (this->fields).chestObject;
      if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
         (pTVar2 = (pMVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          uVar6 = 0;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             ((Vector3 *)&stack0xffffffe8,pTVar3,(MethodInfo *)0x0);
          size = *pVVar4;
          (__return_storage_ptr__->m_Center).x = 0.0;
          (__return_storage_ptr__->m_Center).y = 0.0;
          (__return_storage_ptr__->m_Center).z = 0.0;
          (__return_storage_ptr__->m_Extents).x = 0.0;
          (__return_storage_ptr__->m_Extents).y = 0.0;
          (__return_storage_ptr__->m_Extents).z = 0.0;
          center.y = (float)uVar6;
          center.x = (float)pTVar3;
          center.z = fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
                    (__return_storage_ptr__,center,size,(MethodInfo *)0x0);
          return __return_storage_ptr__;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pBVar8 = (Bounds *)(*pcVar7)();
  return pBVar8;
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
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._._.data,(MethodInfo *)0x0);
    this = (MVGamePointChest *)0x0;
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this_01,(MethodInfo *)0x0);
    pMVar1 = (this_01->fields).chestObject;
    if (pMVar1 != (MVGamePointChestObject *)0x0) {
      MVLogicObject::MVLogicObject_SetupCulling
                ((MVLogicObject *)this_01,(pMVar1->fields).visualObject,5.0,(MethodInfo *)0x0);
      MVGamePointChest_HandleStandaloneDisabling(this_01,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        this = (MVGamePointChest *)(pMVar2->fields).OnWinningConditionFulfilled;
        this_02 = (Action_1_Object_ *)func_?();
        unaff_EDI = (Delegate *)0x0;
        if (this_02 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (this_02,(Object *)this_01,
                     MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_,
                     (MethodInfo *)0x0);
          unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)this,(Delegate *)this_02,(MethodInfo *)0x0);
          this = (MVGamePointChest *)TypeInfo__System__Action<IWinningCondition>;
          if (unaff_EDI == (Delegate *)0x0) {
            (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
            pAStack3 = (Action_1_IWinningCondition___Class *)0x0;
code_?:
            pDStack4 = (Delegate *)&(pMVar2->fields).OnWinningConditionFulfilled;
            func_?();
            MVGamePointChest_UpdateCanRespawn
                      (this_01,(this_01->fields)._._._._.data,(MethodInfo *)0x0);
            return;
          }
          pAStack3 = TypeInfo__System__Action<IWinningCondition>;
          pDStack4 = unaff_EDI;
          pAVar5 = (Action_1_IWinningCondition_ *)func_?();
          if (pAVar5 != (Action_1_IWinningCondition_ *)0x0) {
            (pMVar2->fields).OnWinningConditionFulfilled = pAVar5;
            pAStack3 = TypeInfo__System__Action<IWinningCondition>;
            this = (MVGamePointChest *)TypeInfo__System__Action<IWinningCondition>;
            pDStack4 = unaff_EDI;
            pAStack3 = (Action_1_IWinningCondition___Class *)func_?();
            if (pAStack3 != (Action_1_IWinningCondition___Class *)0x0) goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  pAStack3 = (Action_1_IWinningCondition___Class *)this;
  pDStack4 = unaff_EDI;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    if (*(GameObject **)(in_stack_2 + 0x10) != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(in_stack_2 + 0x10),0,(MethodInfo *)0x0);
      if (*(GameObject **)(in_stack_2 + 0xc) != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(in_stack_2 + 0xc),1,(MethodInfo *)0x0);
        *(undefined1 *)(in_stack_2 + 0x29) = 0;
        if (*(Renderer **)(in_stack_2 + 0x18) != (Renderer *)0x0) {
          pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (*(Renderer **)(in_stack_2 + 0x18),(MethodInfo *)0x0);
          if (pMVar3 != (Material *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                               ((Vector4 *)&stack0xffffffe4,pMVar3,StringLiteral__MainColor,
                                (MethodInfo *)0x0);
            fVar5 = pVVar4->x;
            fVar6 = pVVar4->y;
            fVar7 = pVVar4->z;
            if (*(Renderer **)(in_stack_2 + 0x18) != (Renderer *)0x0) {
              pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                 (*(Renderer **)(in_stack_2 + 0x18),(MethodInfo *)0x0);
              if (pMVar3 != (Material *)0x0) {
                value.y = fVar6;
                value.x = fVar5;
                value.z = fVar7;
                value.w = 1.0;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                          (pMVar3,StringLiteral__MainColor,value,(MethodInfo *)0x0);
                if (*(GreyOutObjectScript **)(in_stack_2 + 0x1c) !=
                    (GreyOutObjectScript *)0x0) {
                  GreyOutObjectScript::GreyOutObjectScript_GreyIn
                            (*(GreyOutObjectScript **)(in_stack_2 + 0x1c),(MethodInfo *)0x0);
                  if (*(Component **)(in_stack_2 + 0x1c) != (Component *)0x0) {
                    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject
                                        (*(Component **)(in_stack_2 + 0x1c),(MethodInfo *)0x0
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
        pMStack2 = (this->klass->vtable).Reset.method;
        (*(this->klass->vtable).Reset.methodPtr)();
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


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_OnWinningConditionFulfilled
               (MVGamePointChest *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  (*(this->klass->vtable).Reset.methodPtr)(this,(this->klass->vtable).Reset.method);
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
  if (((this->fields).state == 2) || ((this->fields).state == 1)) {
    pMVar1 = (this->fields).chestObject;
    if ((pMVar1 == (MVGamePointChestObject *)0x0) ||
       (this_00 = (pMVar1->fields).modelSelector, this_00 == (GamePointChestModelController *)0x0))
    {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
  if (((this->fields).state == 2) || ((this->fields).state == 1)) {
    pMVar1 = (this->fields).chestObject;
    if ((pMVar1 == (MVGamePointChestObject *)0x0) ||
       (this_00 = (pMVar1->fields).modelSelector, this_00 == (GamePointChestModelController *)0x0))
    {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
    pGVar2 = (pMVar1->fields).useInteractionRotator;
    pTVar3 = (((this->fields).chestObject)->fields).triggerBoxEvents;
    if (pTVar3 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
      this_00 = (Predicate_1_Int32Enum_ *)func_?(TypeInfo__System__Func<int,_bool>);
      if (this_00 != (Predicate_1_Int32Enum_ *)0x0) {
        mscorlib.dll::System::Predicate`1[Int32Enum]::Predicate_1_Int32Enum___ctor
                  (this_00,(Object *)this,MethodInfo__MVGamePointChest__OpenChest_int_,
                   (MethodInfo *)0x0);
        this_01 = (Func_3_Int32_Object_Boolean_ *)
                  func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
        if (this_01 != (Func_3_Int32_Object_Boolean_ *)0x0) {
          mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVGamePointChest__IsUsable_int__MVInteractableBase_,
                     (MethodInfo *)0x0);
          pUVar4 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
          if (pUVar4 != (UseInteractor *)0x0) {
            UseInteractor::UseInteractor__ctor
                      (pUVar4,(MVWorldObjectClient *)this,pGVar2,0,triggerCollider,
                       (Func_2_Int32_Boolean_ *)this_00,
                       (Func_3_Int32_MVInteractableBase_Boolean_ *)this_01,2.5,0,(MethodInfo *)0x0);
            (this->fields).useInteractor = pUVar4;
            func_?(&(this->fields).useInteractor,pUVar4);
            pMVar1 = (this->fields).chestObject;
            if (pMVar1 != (MVGamePointChestObject *)0x0) {
              pGVar2 = (pMVar1->fields).useInteractionRotator;
              this_02 = (LevelBasedUseRequirement *)
                        func_?(TypeInfo__LevelBasedUseRequirement);
              if (this_02 != (LevelBasedUseRequirement *)0x0) {
                LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                          (this_02,pGVar2,0,(MethodInfo *)0x0);
                pUVar4 = (this->fields).useInteractor;
                if (pUVar4 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar4,(UseRequirement *)this_02,(MethodInfo *)0x0);
                  pMVar1 = (this->fields).chestObject;
                  if (pMVar1 != (MVGamePointChestObject *)0x0) {
                    pTVar3 = (pMVar1->fields).triggerBoxEvents;
                    pUVar4 = (this->fields).useInteractor;
                    pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                    if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                (pUVar5,(Object *)pUVar4,
                                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                 ,(MethodInfo *)0x0);
                      if (pTVar3 != (TriggerBoxEvents *)0x0) {
                        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                  (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,
                                   (MethodInfo *)0x0);
                        pMVar1 = (this->fields).chestObject;
                        if (pMVar1 != (MVGamePointChestObject *)0x0) {
                          pTVar3 = (pMVar1->fields).triggerBoxEvents;
                          pUVar4 = (this->fields).useInteractor;
                          pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                                   func_?(TypeInfo__System__EventHandler<TriggerEventArgs>)
                          ;
                          if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                            Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                      (pUVar5,(Object *)pUVar4,
                                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                       ,(MethodInfo *)0x0);
                            if (pTVar3 != (TriggerBoxEvents *)0x0) {
                              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                        (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,
                                         (MethodInfo *)0x0);
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
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)newData,
                       (Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    (this->fields).canRespawn = bVar1;
    if (bVar1 != 0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newData,(Object *)StringLiteral_respawnTime,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._._.data;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      (this->fields).gamePointsRewarded = 0x1e;
      return;
    }
    this_01 = (this->fields)._._._._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_gamePointAmount,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        pIStack3 = TypeInfo__System__Int32;
        if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          pIStack3 = (Int32__Class *)pOVar2;
          piVar4 = (int32_t *)func_?();
          (this->fields).gamePointsRewarded = *piVar4;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
  pIStack3 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  if (pPVar1 != (PrefabPool *)0x0) {
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,(pPVar1->fields).gamePointChestPrefab,
               worldObjects,(MethodInfo *)0x0);
    iVar2 = (this->fields)._._._.interactionFlags;
    pMVar3 = (MVGamePointChestObject *)(this->fields)._._._.component;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    puVar4 = (uint *)((int)&(this->fields)._._._.interactionFlags + 4);
    *puVar4 = *puVar4 | 1;
    *(uint *)&(this->fields)._._._.interactionFlags = (uint)iVar2 | 0x8000;
    if (pMVar3 == (MVGamePointChestObject *)0x0) {
      (this->fields).chestObject = (MVGamePointChestObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchyDepth <
           (TypeInfo__MVGamePointChestObject->_1).typeHierarchyDepth) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy
          [(TypeInfo__MVGamePointChestObject->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__MVGamePointChestObject)) goto code_?;
      (this->fields).chestObject = pMVar3;
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchyDepth <
           (TypeInfo__MVGamePointChestObject->_1).typeHierarchyDepth) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy
          [(TypeInfo__MVGamePointChestObject->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__MVGamePointChestObject)) goto code_?;
    }
    func_?(&(this->fields).chestObject);
    pMVar3 = (this->fields).chestObject;
    if (pMVar3 != (MVGamePointChestObject *)0x0) {
      pTVar5 = (pMVar3->fields).triggerBoxEvents;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        pTVar7 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
        if (pTVar7 != (Type *)0x0) {
          pSVar8 = (String *)
                   (*(pTVar7->klass->vtable).__unknown.methodPtr)
                             (pTVar7,(pTVar7->klass->vtable).__unknown.method);
          pSVar8 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar8,
                              (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar8,(MethodInfo *)0x0);
          MVGamePointChest_UpdateCanRespawn(this,(this->fields)._._._._.data,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pMVar3 = (this->fields).chestObject;
        if (pMVar3 != (MVGamePointChestObject *)0x0) {
          pTVar5 = (pMVar3->fields).triggerBoxEvents;
          this_00 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_00,(Object *)this,
                       MethodInfo__MVGamePointChest__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar5 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar5,(EventHandler_1_TriggerEventArgs_ *)this_00,(MethodInfo *)0x0);
              MVGamePointChest_UpdateCanRespawn(this,(this->fields)._._._._.data,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pMVar3 = extraout_EDX;
code_?:
  func_?(pMVar3);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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

