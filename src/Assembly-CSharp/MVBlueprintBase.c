
/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_Clone
          (MVBlueprintBase *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  pMVar1 = (MVWorldObjectClient__Class *)(ulonglong)(uint)cloneGroupId;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__BlueprintData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Object>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBlueprintBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_blueprint_data);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_children_map);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2 = (undefined1  [8])0x0;
  pMStack_3 = (MonitorData *)0x0;
  pOStack_4 = (Object *)0x0;
  this_04 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0;
  fVar5 = 0.0;
  pMVar6 = MVGroup::MVGroup_Clone
                      ((MVGroup *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,worldObjects,
                       prototypes,(MethodInfo *)0x0);
  if (pMVar6 != (MVWorldObjectClient *)0x0) {
    pMVar1 = pMVar6->klass;
    bVar7 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((pMVar1->_1).naturalAligment < bVar7) ||
       ((MVBlueprintBase__Class *)(pMVar1->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      FUN_?(pMVar6);
      pcVar8 = (code *)swi(3);
      pMVar6 = (MVWorldObjectClient *)(*pcVar8)();
      return pMVar6;
    }
    if (pMVar6[1].monitor == (MonitorData *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      return pMVar6;
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)pMVar6[1].monitor;
    EStack_9.klass = (Enum__Class *)TypeInfo__MV__Common__BlueprintData;
    EStack_9.monitor = (MonitorData *)0xffffffffffffffff;
    uStack_10 = CONCAT62(uStack_10._2_6_,2);
    pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this_00,(Object *)pSVar11,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          ->klass->rgctx_data[0x21].method);
      if (iVar12 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_No_children_map,(MethodInfo *)0x0);
        return pMVar6;
      }
      EStack_9.klass = (Enum__Class *)TypeInfo__MV__Common__BlueprintData;
      EStack_9.monitor = (MonitorData *)0xffffffffffffffff;
      uStack_10 = CONCAT62(uStack_10._2_6_,2);
      pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
      pMVar1 = (MVWorldObjectClient__Class *)
                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pDVar13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar11
                              ,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      if (pDVar13 !=
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        pMVar1 = (MVWorldObjectClient__Class *)pDVar13->klass;
        bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pMVar1->_1).naturalAligment < bVar7) ||
           (this_04 = pDVar13,
           (Dictionary_2_System_Object_System_Object___Class *)
           (pMVar1->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar13,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
          pcVar8 = (code *)swi(3);
          pMVar6 = (MVWorldObjectClient *)(*pcVar8)();
          return pMVar6;
        }
      }
      pDStack_14 = this_04;
      this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this_03 = (List_1_System_Object_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<System::Object>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
                 MethodInfo__System__Collections__Generic__List<System::Object>__List__);
      pLStack_15 = this_03;
      if ((this_04 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) && (pDVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                              UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                              Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                        (this_04,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                                        ),
                   pDVar16 !=
                   (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0)) {
        pEStack_17 = (Enum__Class *)(pDVar16->fields)._dictionary;
        EStack_9.monitor = (MonitorData *)0x0;
        uStack_10 = 0;
        method_00 = pMVar1;
        if (iRam_? != 0) {
          uVar18 = (uint)((ulonglong)&EStack_9 >> 0xc);
          lVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6) * 8;
          method_00 = (MVWorldObjectClient__Class *)(ulonglong)(uVar18 & 0x3f);
          do {
            uVar20 = *(ulonglong *)(lVar19 + 0xADDR);
            puVar21 = (ulonglong *)(lVar19 + 0xADDR);
            LOCK();
            bVar22 = uVar20 == *puVar21;
            if (bVar22) {
              *puVar21 = uVar20 | 1L << (longlong)method_00;
            }
            UNLOCK();
          } while (!bVar22);
        }
        if (pEStack_17 == (Enum__Class *)0x0) {
          EStack_9.klass = pEStack_17;
          FUN_?();
          pcVar8 = (code *)swi(3);
          pMVar6 = (MVWorldObjectClient *)(*pcVar8)();
          return pMVar6;
        }
        EStack_9.monitor =
             (MonitorData *)((ulonglong)*(uint *)&(pEStack_17->_0).byval_arg.field_0xc << 0x20);
        uStack_10 = 0;
        uStack_23 = EStack_9.monitor;
        pMStack_24 = (MVWorldObjectClient__Class *)0x0;
        EStack_9.klass = (Enum__Class *)0x0;
        EStack_9.monitor = (MonitorData *)&pEStack_17;
code_?:
        if (pEStack_17 != (Enum__Class *)0x0) {
          if (uStack_23._4_4_ == *(int *)&(pEStack_17->_0).byval_arg.field_0xc) {
            uVar20 = (ulonglong)uStack_23 & 0xffffffff;
            pMVar1 = method_00;
code_?:
            if (pEStack_17 != (Enum__Class *)0x0) {
              uVar18 = (uint)uVar20;
              if (uVar18 < (uint)(pEStack_17->_0).byval_arg.data.__klassIndex) {
                pMVar1 = (MVWorldObjectClient__Class *)(pEStack_17->_0).namespaze;
                uVar20 = (ulonglong)(uVar18 + 1);
                uStack_23 = (MonitorData *)CONCAT44(uStack_23._4_4_,uVar18 + 1);
                if (pMVar1 != (MVWorldObjectClient__Class *)0x0) {
                  if (uVar18 < *(uint *)&(pMVar1->_0).namespaze) goto code_?;
                  goto code_?;
                }
                goto code_?;
              }
              uStack_23 = (MonitorData *)
                          CONCAT44(uStack_23._4_4_,(pEStack_17->_0).byval_arg.data.__klassIndex + 1)
              ;
              pMStack_24 = (MVWorldObjectClient__Class *)0x0;
              if (this_03 != (List_1_System_Object_ *)0x0) {
                if (iRam_? != 0) {
                  uVar18 = (uint)((ulonglong)&EStack_9 >> 0xc);
                  lVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar20 = *(ulonglong *)(lVar19 + 0xADDR);
                    puVar21 = (ulonglong *)(lVar19 + 0xADDR);
                    LOCK();
                    bVar22 = uVar20 == *puVar21;
                    if (bVar22) {
                      *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar22);
                }
                EStack_9.monitor =
                     (MonitorData *)((ulonglong)(uint)(this_03->fields)._version << 0x20);
                uStack_10 = 0;
                pMStack_3 = EStack_9.monitor;
                pOStack_4 = (Object *)0x0;
                EStack_9.klass = (Enum__Class *)0x0;
                EStack_9.monitor = (MonitorData *)auStack_2;
                pEVar25 = pEStack_17;
                auStack_2 = (undefined1  [8])this_03;
                while( true ) {
                  bVar26 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                           Object]::List_1_T_Enumerator_System_Object__MoveNext
                                     ((List_1_T_Enumerator_System_Object_ *)auStack_2,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__MoveNext__
                                     );
                  pOVar27 = pOStack_4;
                  if (bVar26 == 0) {
                    *(Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                      **)&pMVar6[1].fields._.itemId = this_02;
                    if (iRam_? == 0) {
                      return pMVar6;
                    }
                    uVar18 = (uint)((ulonglong)&pMVar6[1].fields._.itemId >> 0xc);
                    lVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar20 = *(ulonglong *)(lVar19 + 0xADDR);
                      puVar21 = (ulonglong *)(lVar19 + 0xADDR);
                      LOCK();
                      bVar22 = uVar20 == *puVar21;
                      if (bVar22) {
                        *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar22);
                    return pMVar6;
                  }
                  if (cloneBookkeeping == (CloneBookkeeping *)0x0) goto code_?;
                  this_01 = (Dictionary_2_System_Int32_System_Single_ *)
                            (cloneBookkeeping->fields).worldObjectIdsMaps;
                  method_00 = (MVWorldObjectClient__Class *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__get_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)this_04,
                                         pOStack_4,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        );
                  this = (MVBlueprintBase *)
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                  ;
                  if (this_01 == (Dictionary_2_System_Int32_System_Single_ *)0x0) break;
                  if (method_00 == (MVWorldObjectClient__Class *)0x0) goto code_?;
                  pIVar28 = (method_00->_0).image;
                  lVar19._0_4_ = pIVar28->token;
                  lVar19._4_1_ = pIVar28->dynamic;
                  lVar19._5_3_ = *(undefined3 *)&pIVar28->field_0x45;
                  if (lVar19 != *(longlong *)(lRam_? + 0x40))
                  goto code_?;
                  fVar5 = *(float *)&(method_00->_0).name;
                  method_00 = (MVWorldObjectClient__Class *)
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                              ->klass->rgctx_data[0x21].method;
                  uVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,System::Single]::Dictionary_2_System_Int32_System_Single__FindEntry
                                     (this_01,(int32_t)fVar5,(MethodInfo *)method_00);
                  if ((int)uVar18 < 0) goto code_?;
                  pDVar29 = (this_01->fields)._entries;
                  if (pDVar29 == (Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Array *
                                )0x0) goto code_?;
                  if ((uint)pDVar29->max_length <= uVar18) goto code_?;
                  fVar5 = pDVar29->vector[(int)uVar18].value;
                  afStackX_10[0] = fVar5;
                  method_00 = (MVWorldObjectClient__Class *)
                              FUN_?(lRam_?,afStackX_10);
                  uVar30 = CONCAT71((int7)((ulonglong)pEVar25 >> 8),1);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_04,pOVar27,
                             (Object *)method_00,(InsertionBehavior__Enum)uVar30,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  afStackX_10[0] = fVar5;
                  key = (Object *)FUN_?(lRam_?,afStackX_10);
                  if (this_02 ==
                      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)0x0) goto code_?;
                  pEVar25 = (Enum__Class *)CONCAT71((int7)((ulonglong)uVar30 >> 8),1);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_02,key,pOVar27,
                             (InsertionBehavior__Enum)pEVar25,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  method_00 = pMVar1;
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
code_?:
  afStackX_10[0] = fVar5;
  uVar30 = func_?(((Il2CppClass *)(this->fields)._._._.outputLinkRefs)->rgctx_data,0xe)
  ;
  pOVar27 = (Object *)func_?(uVar30);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
            (pOVar27,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(method_00);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar8 = (code *)swi(3);
  pMVar6 = (MVWorldObjectClient *)(*pcVar8)();
  return pMVar6;
code_?:
  if (-1 < *(int *)((longlong)&(pMVar1->_0).byval_arg + (longlong)(int)uVar18 * 0x18))
  goto code_?;
  goto code_?;
code_?:
  pMStack_24 = *(MVWorldObjectClient__Class **)
                ((longlong)&(pMVar1->_0).byval_arg + (longlong)(int)uVar18 * 0x18 + 8);
  func_?();
  pMVar31 = MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_;
  if (this_03 == (List_1_System_Object_ *)0x0) goto code_?;
  piVar32 = &(this_03->fields)._version;
  *piVar32 = *piVar32 + 1;
  pOVar33 = (this_03->fields)._items;
  uVar18 = (this_03->fields)._size;
  pMVar1 = (MVWorldObjectClient__Class *)(longlong)(int)uVar18;
  if (pOVar33 == (Object__Array *)0x0) goto code_?;
  if (uVar18 < (uint)pOVar33->max_length) {
    (this_03->fields)._size = uVar18 + 1;
    method_00 = pMStack_24;
    FUN_?(pOVar33,pMVar1);
  }
  else {
    method_00 = (MVWorldObjectClient__Class *)pMVar31->klass->rgctx_data[0xe].method;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddWithResize(this_03,(Object *)pMStack_24,(MethodInfo *)method_00);
  }
  goto code_?;
}


/* Void Compare(MVWorldObjectClient, Boolean, Int32 ByRef, Int32 ByRef) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_Compare
               (MVBlueprintBase *this,MVWorldObjectClient *wo,bool visibleCubesOnly,
               int32_t *matchingCubeCount,int32_t *investigatedCubeCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,wo,CONCAT71(in_register_00000081,visibleCubesOnly));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBlueprintBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_compare_different_type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_a_blue_print);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    if ((wo->fields)._.type != (this->fields)._._._.type) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Trying_to_compare_different_type,(MethodInfo *)0x0);
    }
    bVar1 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar1) ||
       ((MVBlueprintBase__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Not_a_blue_print,(MethodInfo *)0x0);
    }
    bVar1 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar1) ||
       ((MVBlueprintBase__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      FUN_?(wo);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pDVar3 = (this->fields)._._._.data;
    if ((pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar3,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar3->klass->_1).naturalAligment < bVar1) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar3->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pDStack_4 = (Dictionary_2_System_Object_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar3,(Object *)StringLiteral_ChildrenMap,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      if (pDStack_4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar5 = pDStack_4->klass;
        bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar5->_1).naturalAligment < bVar1) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar5->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDStack_4);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar5->_1).naturalAligment < bVar1) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar5->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDStack_4);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uStack_6 = 0;
        uStack_7 = 0;
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&pDStack_4 >> 0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar10 = *puVar9;
            LOCK();
            uVar11 = *puVar9;
            if (uVar10 == uVar11) {
              *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar10 != uVar11);
        }
        uStack_12 = (ulonglong)(uint)(pDStack_4->fields)._version;
        uStack_13 = 2;
        DStack_14._version = (undefined4)uStack_12;
        DStack_14._index = uStack_12._4_4_;
        DStack_14._current.key = (Object *)0x0;
        DStack_14._current.value = (Object *)0x0;
        DStack_14._getEnumeratorRetType = 2;
        DStack_14._36_4_ = 0;
        DStack_14._dictionary = pDStack_4;
code_?:
        bVar15 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_14,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        pOVar16 = DStack_14._current.key;
        if (bVar15 == 0) {
          return;
        }
        pSVar17 = (String *)0x0;
        if ((String *)DStack_14._current.key != (String *)0x0) {
          if ((String__Class *)(DStack_14._current.key)->klass == pSRam0000000182db2460) {
            pSVar17 = (String *)DStack_14._current.key;
          }
          if (pSVar17 == (String *)0x0) goto code_?;
        }
        pMVar18 = MVBlueprintBase_GetChild(this,pSVar17,(MethodInfo *)0x0);
        pSVar17 = (String *)0x0;
        if ((String *)pOVar16 == (String *)0x0) goto code_?;
        if ((String__Class *)pOVar16->klass == pSRam0000000182db2460) {
          pSVar17 = (String *)pOVar16;
        }
        if (pSVar17 != (String *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_?:
  pMVar19 = MVBlueprintBase_GetChild((MVBlueprintBase *)wo,pSVar17,(MethodInfo *)0x0);
  if (pMVar19 != (MVWorldObjectClient *)0x0) {
    iVar20 = (pMVar19->fields)._.type;
    if (pMVar18 == (MVWorldObjectClient *)0x0) {
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iVar20 == (pMVar18->fields)._.type) {
      FUN_?(iVar20,pMVar18,pMVar19,visibleCubesOnly,matchingCubeCount,investigatedCubeCount);
    }
  }
  goto code_?;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_CompareWithKoGaMaPackage
               (MVBlueprintBase *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,int32_t *insertedByProfileId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  compareChildren =
       (List_1_System_String_ *)
       FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)compareChildren,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).childIdMap;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_2 = (pDVar1->fields)._dictionary;
    ppDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (pDStack_2 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_6 = pDStack_2;
      FUN_?();
      pcVar10 = (code *)swi(3);
      bVar11 = (*pcVar10)();
      return bVar11;
    }
    ppDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)((ulonglong)(uint)(pDStack_2->fields)._version << 0x20);
    uStack_4 = 0;
    uStack_12 = (ulonglong)ppDStack_3;
    pOStack_13 = (Object *)0x0;
    pDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    ppDStack_3 = &pDStack_2;
    while (pDStack_2 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) {
      if (uStack_12._4_4_ != (pDStack_2->fields)._version) goto code_?;
      uVar9 = uStack_12 & 0xffffffff;
      do {
        if (pDStack_2 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        uVar5 = (uint)uVar9;
        if ((uint)(pDStack_2->fields)._count <= uVar5) {
          uStack_12 = CONCAT44(uStack_12._4_4_,(pDStack_2->fields)._count + 1);
          pOStack_13 = (Object *)0x0;
          bVar11 = MVBlueprintBase_CompareWorldObjectsInChildrenMap
                            (this,wo,koGaMaPackageClient,compareChildren,insertedByProfileId,
                             (MethodInfo *)0x0);
          return bVar11;
        }
        pDVar14 = (pDStack_2->fields)._entries;
        uVar9 = (ulonglong)(uVar5 + 1);
        uStack_12 = CONCAT44(uStack_12._4_4_,uVar5 + 1);
        if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar14->max_length <= uVar5) goto code_?;
      } while ((&pDVar14->vector[0].hashCode)[(longlong)(int)uVar5 * 6] < 0);
      pOStack_13 = *(Object **)((longlong)&pDVar14->vector[0].key + (longlong)(int)uVar5 * 0x18);
      func_?();
      pMVar15 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
      item = (Object *)0x0;
      if (pOStack_13 != (Object *)0x0) {
        if (pOStack_13->klass == pORam0000000182db2460) {
          item = pOStack_13;
        }
        if (item == (Object *)0x0) goto code_?;
      }
      if (compareChildren == (List_1_System_String_ *)0x0) goto code_?;
      piVar16 = &(compareChildren->fields)._version;
      *piVar16 = *piVar16 + 1;
      pSVar17 = (compareChildren->fields)._items;
      uVar5 = (compareChildren->fields)._size;
      if (pSVar17 == (String__Array *)0x0) goto code_?;
      if (uVar5 < (uint)pSVar17->max_length) {
        (compareChildren->fields)._size = uVar5 + 1;
        FUN_?(pSVar17,(longlong)(int)uVar5,item);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)compareChildren,item,
                   pMVar15->klass->rgctx_data[0xe].method);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Boolean CompareWorldObjectsInChildrenMap(MVWorldObjectClient, KoGaMaPackageClient,
   List`1[System.String], Int32 ByRef) */

bool Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_CompareWorldObjectsInChildrenMap
               (MVBlueprintBase *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,List_1_System_String_ *compareChildren,
               int32_t *insertedByProfileId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBlueprintBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Types_does_not_match_this__0__an);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_otherChild__0__is_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  lVar3 = FUN_?(&(wo->klass->_0).byval_arg);
  lVar4 = FUN_?(&(this->klass->_0).byval_arg);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (lVar3 == lVar4) {
    bVar5 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar5) ||
       ((MVBlueprintBase__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      FUN_?(wo);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    if (compareChildren == (List_1_System_String_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&PStack_7 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    PStack_7._arg1 = (Object *)((ulonglong)(uint)(compareChildren->fields)._version << 0x20);
    PStack_7._arg2 = (Object *)0x0;
    auStack_11._8_8_ = PStack_7._arg1;
    pSStack_12 = (String *)0x0;
    PStack_7._arg0 = (Object *)0x0;
    PStack_7._arg1 = (Object *)auStack_11;
    auStack_11._0_8_ = compareChildren;
    do {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)auStack_11,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                        );
      pSVar13 = pSStack_12;
      if (bVar2 == 0) {
        return 1;
      }
      pMVar14 = MVBlueprintBase_GetChild((MVBlueprintBase *)wo,pSStack_12,(MethodInfo *)0x0);
      if (pMVar14 == (MVWorldObjectClient *)0x0) {
        pSVar13 = mscorlib.dll::System::String::String_Format
                            (StringLiteral_otherChild__0__is_null,(Object *)pSVar13,
                             (MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar13,(MethodInfo *)0x0);
        return 0;
      }
      pMVar14 = MVBlueprintBase_GetChild(this,pSVar13,(MethodInfo *)0x0);
      if (pMVar14 == (MVWorldObjectClient *)0x0) goto code_?;
      cVar15 = FUN_?();
    } while (cVar15 != '\0');
  }
  else {
    arg0 = (Object *)FUN_?(&(this->klass->_0).byval_arg);
    arg1 = (Object *)FUN_?(&(wo->klass->_0).byval_arg);
    pSVar13 = StringLiteral_Types_does_not_match_this__0__an;
    PStack_7._arg0 = (Object *)0x0;
    PStack_7._arg1 = (Object *)0x0;
    PStack_7._arg2 = (Object *)0x0;
    PStack_7._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_7,arg0,arg1,(MethodInfo *)0x0);
    PStack_16._arg0 = PStack_7._arg0;
    PStack_16._arg1 = PStack_7._arg1;
    PStack_16._arg2 = PStack_7._arg2;
    PStack_16._args = PStack_7._args;
    pSVar13 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,pSVar13,&PStack_16,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar13,(MethodInfo *)0x0);
  }
  return 0;
}


/* MVWorldObjectClient GetChild(String) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_GetChild
          (MVBlueprintBase *this,String *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Child_with_name__0__not_found_in);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).childIdMap;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)child,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    pSVar2 = StringLiteral_Child_with_name__0__not_found_in;
    if (iVar1 < 0) {
      PStack_3._arg0 = (Object *)0x0;
      PStack_3._arg1 = (Object *)0x0;
      PStack_3._arg2 = (Object *)0x0;
      PStack_3._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_3,(Object *)child,(Object *)this,(MethodInfo *)0x0);
      PStack_4._arg0 = PStack_3._arg0;
      PStack_4._arg1 = PStack_3._arg1;
      PStack_4._arg2 = PStack_3._arg2;
      PStack_4._args = PStack_3._args;
      pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar2,&PStack_4,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    this_01 = (this->fields).childIdMap;
    if ((this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)child,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pOVar5 != (Object *)0x0)) {
      if ((pOVar5->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        pMVar6 = MVGroup::MVGroup_GetChild
                           ((MVGroup *)this,*(int32_t *)&pOVar5[1].klass,(MethodInfo *)0x0);
        return pMVar6;
      }
      FUN_?(pOVar5,lRam_?);
      pcVar7 = (code *)swi(3);
      pMVar6 = (MVWorldObjectClient *)(*pcVar7)();
      return pMVar6;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pMVar6 = (MVWorldObjectClient *)(*pcVar7)();
  return pMVar6;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_Initialize
               (MVBlueprintBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  LStack_1._list =
       (List_1_System_Object_ *)MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
  if ((List_1_MVWorldObjectClient_ *)LStack_1._list == (List_1_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_MVWorldObjectClient_ *)LStack_1._list)->fields)._version
               << 0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    bVar11 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((((bVar11 <= ((LStack_1._current)->klass->_1).naturalAligment) &&
         ((MVCubeModelInstance__Class *)
          ((LStack_1._current)->klass->_1).typeHierarchy[(ulonglong)bVar11 - 1] ==
          TypeInfo__MVCubeModelInstance)) && (LStack_1._current != (Object *)0x0)) &&
       ((((uint)(this->fields)._._.interactionFlags >> 0xe & 1) != 0 &&
        ((*(uint *)&LStack_1._current[0x11].monitor >> 0xe & 1) == 0)))) {
      piVar12 = &(this->fields)._._.interactionFlags;
      *piVar12 = *piVar12 & 0xffffffffffffbfff;
    }
    LStack_1._current[0x11].monitor =
         (MonitorData *)((ulonglong)LStack_1._current[0x11].monitor & 0xffffffffffffbfff);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void MapDataToFields() */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_MapDataToFields
               (MVBlueprintBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_blueprint_data);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      return;
    }
    pDVar2 = (this->fields)._._._.data;
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        (this->fields).blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar2);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (this->fields).blueprintData = pDVar2;
        bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar2);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&(this->fields).blueprintData >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      pDVar2 = (this->fields).blueprintData;
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar2,(Object *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          (this->fields).childIdMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar3 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar2);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (this->fields).childIdMap = pDVar2;
          bVar3 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar2);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(this->fields).childIdMap >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        pDVar2 = (this->fields).childIdMap;
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uStack_10 = 0;
          uStack_11 = 0;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&pDStack_12 >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          uStack_13 = (ulonglong)(uint)(pDVar2->fields)._version;
          uStack_14 = 2;
          DStack_15._version = (undefined4)uStack_13;
          DStack_15._index = uStack_13._4_4_;
          DStack_15._current.key = (Object *)0x0;
          DStack_15._current.value = (Object *)0x0;
          DStack_15._getEnumeratorRetType = 2;
          DStack_15._36_4_ = 0;
          pDStack_12 = pDVar2;
          DStack_15._dictionary = pDVar2;
          while( true ) {
            bVar16 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_15,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar16 == 0) {
              return;
            }
            this_01 = (this->fields).idChildMap;
            if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                     CONCAT71((int7)((ulonglong)pDVar2 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (this_01,DStack_15._current.value,DStack_15._current.key,
                       (InsertionBehavior__Enum)pDVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVBlueprintBase(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase__ctor
               (MVBlueprintBase *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._8_8_ = &UNK_?;
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  auStack_1._8_8_ = &UNK_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).idChildMap = (Dictionary_2_System_Object_System_Object_ *)this_02;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).idChildMap >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  auStack_1._8_8_ = &UNK_?;
  MVGroup::MVGroup__ctor_2((MVGroup *)this,data,worldObjects,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_blueprint_data);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar7 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      return;
    }
    pDVar8 = (this->fields)._._._.data;
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar8,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        (this->fields).blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (this->fields).blueprintData = pDVar8;
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).blueprintData >> 0xc);
        lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar4 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar2 = uVar6 == *puVar4;
          if (bVar2) {
            *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pDVar8 = (this->fields).blueprintData;
      if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar8,(Object *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          (this->fields).childIdMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar9 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar8);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          (this->fields).childIdMap = pDVar8;
          bVar9 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar8);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields).childIdMap >> 0xc);
          lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar4 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar2 = uVar6 == *puVar4;
            if (bVar2) {
              *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        pDVar8 = (this->fields).childIdMap;
        if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uStack_12 = 0;
          uStack_13 = 0;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&pDStack_14 >> 0xc);
            lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar4 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar2 = uVar6 == *puVar4;
              if (bVar2) {
                *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          puStack_15 = (undefined *)(ulonglong)(uint)(pDVar8->fields)._version;
          uStack_16 = 2;
          auStack_1._8_8_ = puStack_15;
          pOStack_17 = (Object *)0x0;
          pOStack_18 = (Object *)0x0;
          uStack_19._0_4_ = 2;
          uStack_19._4_4_ = 0;
          pDStack_14 = pDVar8;
          auStack_1._0_8_ = pDVar8;
          while( true ) {
            bVar20 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               auStack_1,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar20 == 0) {
              return;
            }
            this_01 = (this->fields).idChildMap;
            if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                     CONCAT71((int7)((ulonglong)pDVar8 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (this_01,pOStack_18,pOStack_17,(InsertionBehavior__Enum)pDVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVBlueprintBase(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase__ctor_1
               (MVBlueprintBase *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).idChildMap = (Dictionary_2_System_Object_System_Object_ *)this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).idChildMap >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_03 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._.children = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)this_03;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.children >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_1
            ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  piVar6 = &(this->fields)._._.interactionFlags;
  *piVar6 = *piVar6 | 0x82101;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_blueprint_data);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar7 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      return;
    }
    pDVar8 = (this->fields)._._._.data;
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar8,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        (this->fields).blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (this->fields).blueprintData = pDVar8;
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(this->fields).blueprintData >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pDVar8 = (this->fields).blueprintData;
      if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar8,(Object *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          (this->fields).childIdMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar9 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar8);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          (this->fields).childIdMap = pDVar8;
          bVar9 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar8);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(this->fields).childIdMap >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pDVar8 = (this->fields).childIdMap;
        if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          puStack_11 = (undefined *)0x0;
          uStack_12 = 0;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&pDStack_13 >> 0xc);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          uStack_14 = (ulonglong)(uint)(pDVar8->fields)._version;
          uStack_15 = 2;
          uStack_16 = uStack_14;
          value = (Object *)0x0;
          pDStack_13 = pDVar8;
          pDStack_17 = pDVar8;
          while( true ) {
            bVar18 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &pDStack_17,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar18 == 0) {
              return;
            }
            this_01 = (this->fields).idChildMap;
            if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                     CONCAT71((int7)((ulonglong)pDVar8 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (this_01,(Object *)0x0,value,(InsertionBehavior__Enum)pDVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVBlueprintBase(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase__ctor_2
               (MVBlueprintBase *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).idChildMap = (Dictionary_2_System_Object_System_Object_ *)this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).idChildMap >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  MVGroup::MVGroup__ctor((MVGroup *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_blueprint_data);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar6 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      return;
    }
    pDVar7 = (this->fields)._._._.data;
    if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar7,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        (this->fields).blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar7->klass->_1).naturalAligment < bVar8) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar7);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (this->fields).blueprintData = pDVar7;
        bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar7->klass->_1).naturalAligment < bVar8) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar7);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(this->fields).blueprintData >> 0xc);
        lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar3 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar1 = uVar5 == *puVar3;
          if (bVar1) {
            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pDVar7 = (this->fields).blueprintData;
      if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar7,(Object *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          (this->fields).childIdMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar8 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar7->klass->_1).naturalAligment < bVar8) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar7);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (this->fields).childIdMap = pDVar7;
          bVar8 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar7->klass->_1).naturalAligment < bVar8) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar7);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(this->fields).childIdMap >> 0xc);
          lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar10 + 0xADDR);
            puVar3 = (ulonglong *)(lVar10 + 0xADDR);
            LOCK();
            bVar1 = uVar5 == *puVar3;
            if (bVar1) {
              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pDVar7 = (this->fields).childIdMap;
        if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uStack_11 = 0;
          uStack_12 = 0;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&pDStack_13 >> 0xc);
            lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar10 + 0xADDR);
              puVar3 = (ulonglong *)(lVar10 + 0xADDR);
              LOCK();
              bVar1 = uVar5 == *puVar3;
              if (bVar1) {
                *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          uStack_14 = (ulonglong)(uint)(pDVar7->fields)._version;
          puStack_15 = (undefined *)0x2;
          uStack_16 = uStack_14;
          pOStack_17 = (Object *)0x0;
          pOStack_18 = (Object *)0x0;
          pDStack_13 = pDVar7;
          pDStack_19 = pDVar7;
          while( true ) {
            bVar20 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &pDStack_19,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar20 == 0) {
              return;
            }
            this_01 = (this->fields).idChildMap;
            if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
                     CONCAT71((int7)((ulonglong)pDVar7 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (this_01,pOStack_18,pOStack_17,(InsertionBehavior__Enum)pDVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

