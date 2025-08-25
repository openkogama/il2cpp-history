
/* Object2ObjectSnap+SnapResult CalculateSnapResult(GameObject, Object2ObjectSnap+Config) */

Object2ObjectSnap_SnapResult *
Assembly-CSharp.dll::RTG::Object2ObjectSnap::Object2ObjectSnap_CalculateSnapResult
          (Object2ObjectSnap_SnapResult *__return_storage_ptr__,GameObject *root,
          Object2ObjectSnap_Config snapConfig,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffd18;
  puVar5 = &stack0xfffffd18;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&TypeInfo__System__Comparison<RTG::Object2ObjectSnap::SnapSortData>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__Add_RTG__Object2ObjectSnap__SnapSortData_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__Sort_System__Comparison<RTG::Object2ObjectSnap::SnapSortData>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__List_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__get_Item_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    func_?(&TypeInfo__RTG__Object2ObjectSnap);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__System__Predicate<UnityEngine::GameObject>);
    func_?(&MethodInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>);
    func_?(&
                    MethodInfo__RTG__Object2ObjectSnap____c___CalculateSnapResult_b__14_0_RTG__Object2ObjectSnap__SnapSortData__RTG__Object2ObjectSnap__SnapSortData_
                   );
    func_?(&
                    MethodInfo__RTG__Object2ObjectSnap____c___CalculateSnapResult_b__14_1_RTG__Object2ObjectSnap__SnapSortData__RTG__Object2ObjectSnap__SnapSortData_
                   );
    func_?(&
                    MethodInfo__RTG__Object2ObjectSnap____c__DisplayClass14_0___CalculateSnapResult_b__2_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__RTG__Object2ObjectSnap____c__DisplayClass14_0);
    func_?(&TypeInfo__RTG__Object2ObjectSnap____c);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  LStack_7._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current.First = 0;
  LStack_7._current.Last = 0;
  func_?(&OStack_8,0,0x2c);
  LStack_9._list = (List_1_System_Object_ *)0x0;
  LStack_9._index = 0;
  LStack_9._version = 0;
  LStack_9._current = (Object *)0x0;
  PStack_10.parent = (Il2CppClass *)0x0;
  PStack_10.name = (char *)0x0;
  PStack_10.get = (MethodInfo *)0x0;
  PStack_10.set = (MethodInfo *)0x0;
  func_?(&stack0xfffffd54,0,0x2c);
  auStack_11._0_4_ = (Object__Class *)0x0;
  auStack_11._4_4_ = (MonitorData *)0x0;
  auStack_11._8_4_ = 0;
  auStack_11._12_4_ = 0;
  auStack_11._16_4_ = 0;
  auStack_11._20_4_ = 0.0;
  auStack_12._0_4_ = (Object__Class *)0x0;
  auStack_12._4_4_ = (MonitorData *)0x0;
  auStack_12._8_4_ = (char *)0x0;
  auStack_12._12_4_ = (char *)0x0;
  auStack_12._16_4_ = (void *)0x0;
  pIStack_13 = (Il2CppClass *)0x0;
  method_00 = TypeInfo__RTG__Object2ObjectSnap____c__DisplayClass14_0;
  pOVar14 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar14,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  _Var9 = _Stack_84;
  pOStack_15 = pOVar14;
  if (pOVar14 != (Object *)0x0) {
    pOVar14[1].klass = (Object__Class *)root;
    func_?();
    pOVar14[1].monitor = (MonitorData *)snapConfig._areaMatchEps;
    pOVar14[2].klass = (Object__Class *)snapConfig.IgnoreDestObjects;
    pOVar14[2].monitor = (MonitorData *)snapConfig.DestinationLayers;
    pOVar14[3].klass = (Object__Class *)snapConfig.SnapRadius;
    pOVar14[3].monitor = (MonitorData *)snapConfig.Prefs;
    func_?(pOVar14 + 2,0);
    if (pOVar14[2].klass == (Object__Class *)0x0) {
      pOVar16 = (Object__Class *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>
                               );
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pOVar16,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
      pOVar14[2].klass = pOVar16;
      func_?(pOVar14 + 2,pOVar16);
    }
    pOVar16 = pOVar14[1].klass;
    if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__GameObjectEx);
    }
    RStack_17 = (RegexCharClass_SingleRange)
                GameObjectEx::GameObjectEx_GetAllChildrenAndSelf
                          ((GameObject *)pOVar16,(MethodInfo *)0x0);
    _Var9 = _Stack_84;
    if (RStack_17 != (RegexCharClass_SingleRange)0x0) {
      iVar18 = *(int32_t *)((int)RStack_17 + 0xc);
      if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (100 < iVar18) {
        pMVar19 = (MethodInfo *)0x0;
        failReson = Object2ObjectSnap_SnapFailReson__Enum_MaxObjectsExceeded;
code_?:
        iStack_20 = 0;
        auStack_21._8_4_ = 0.0;
        auStack_22._0_4_ = 0.0;
        auStack_22._4_4_ = 0.0;
        fStack_23 = 0.0;
        QStack_24.x = 0.0;
        QStack_24.y = 0.0;
        QStack_24.z = 0.0;
        QStack_24.w = 0.0;
        Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor
                  ((Object2ObjectSnap_SnapResult *)(auStack_21 + 8),failReson,pMVar19);
        *(undefined4 *)__return_storage_ptr__ = auStack_21._8_4_;
        (__return_storage_ptr__->_snapPivot).x = (float)auStack_22._0_4_;
        (__return_storage_ptr__->_snapPivot).y = (float)auStack_22._4_4_;
        (__return_storage_ptr__->_snapPivot).z = fStack_23;
        (__return_storage_ptr__->_snapDestination).x = QStack_24.x;
        (__return_storage_ptr__->_snapDestination).y = QStack_24.y;
        (__return_storage_ptr__->_snapDestination).z = QStack_24.z;
        __return_storage_ptr__->_snapDistance = QStack_24.w;
        __return_storage_ptr__->_failReason = iStack_20;
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      pOVar16 = pOVar14[1].klass;
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar25 = GameObjectEx::GameObjectEx_GetMeshObjectsInHierarchy
                          ((GameObject *)pOVar16,(MethodInfo *)0x0);
      pMVar19 = (MethodInfo *)0x0;
      pLVar26 = GameObjectEx::GameObjectEx_GetSpriteObjectsInHierarchy
                          ((GameObject *)pOVar14[1].klass,(MethodInfo *)0x0);
      _Var9 = _Stack_84;
      if (pLVar25 != (List_1_UnityEngine_GameObject_ *)0x0) {
        if ((pLVar25->fields)._size == 0) {
          if (pLVar26 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
          if ((pLVar26->fields)._size == 0) {
            failReson = Object2ObjectSnap_SnapFailReson__Enum_InvalidSourceObjects;
            goto code_?;
          }
        }
        PStack_10.token = 0;
        fStack_27 = 0.0;
        fStack_28 = 0.0;
        PStack_10.attrs = 5;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar29 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar30 = (pVVar29->oneVector).x;
        uVar31 = (pVVar29->oneVector).y;
        _Stack_84 = (_union_86)(pVVar29->oneVector).z;
        pOVar16 = pOVar14[3].klass;
        pFStack_32 = (FieldInfo *)
                     ((float)_Stack_84 * (float)pOVar16 + (float)_Stack_84 * (float)pOVar16);
        pIStack_33 = (Il2CppClass *)((float)uVar31 * (float)pOVar16 + (float)uVar31 * (float)pOVar16);
        pIStack_34 = (Il2CppInteropData *)
                     ((float)uVar30 * (float)pOVar16 + (float)uVar30 * (float)pOVar16);
        fStack_35 = (float)uVar30;
        pcStack_36 = (char *)uVar31;
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOStack_37 = (Object__Class *)BoxMath::BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
        pIStack_38 = (Il2CppClass *)((uint)pOVar14[3].monitor & 1);
        bVar39 = false;
        pIStack_40 = pIStack_38;
        this = (Il2CppClass *)func_?();
        pIStack_41 = this;
        pIStack_42 = this;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
        MultiColumnCollectionHeader+ViewState+ColumnState]::
        List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                  ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                    *)this,10,
                   MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__List_int_
                  );
        pOVar16 = (Object__Class *)0x34;
        pIStack_43 = this;
        func_?(&RStack_44,0);
        pLVar45 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                            (&LStack_46,
                             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             RStack_17,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                            );
        uStack_47._0_2_ = 0;
        uStack_47._2_2_ = 0;
        LStack_6._list = (List_1_System_Object_ *)pLVar45->_list;
        LStack_6._index = pLVar45->_index;
        LStack_6._version = pLVar45->_version;
        LStack_6._current = *(Object **)&pLVar45->_current;
        pLStack_48 = &LStack_6;
        uStack_1 = 0;
        while( true ) {
          uStack_1._0_1_ = 1;
          do {
            do {
              bVar49 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                       Object]::List_1_T_Enumerator_System_Object__MoveNext
                                 (&LStack_6,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                 );
              pOVar14 = LStack_6._current;
              if (bVar49 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)pLStack_48,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                           ,(MethodInfo *)pOVar16);
                uStack_1._0_1_ = 0xff;
                uStack_1._1_3_ = 0xffffff;
                _Var9 = _Stack_84;
                if (this == (Il2CppClass *)0x0) goto code_?;
                if (this->namespaze == (char *)0x0) {
                  pMVar19 = (MethodInfo *)0x0;
                  failReson = Object2ObjectSnap_SnapFailReson__Enum_NoDestinationFound;
                  goto code_?;
                }
                if ((pIStack_38 != (Il2CppClass *)0x0) && (bVar39)) goto code_?;
                if ((TypeInfo__RTG__Object2ObjectSnap____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                this_01 = TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_0;
                if (this_01 != (Comparison_1_RTG_Object2ObjectSnap_SnapSortData_ *)0x0)
                goto code_?;
                if ((TypeInfo__RTG__Object2ObjectSnap____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pOVar50 = TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9;
                this_01 = (Comparison_1_RTG_Object2ObjectSnap_SnapSortData_ *)func_?();
                mscorlib.dll::System::Comparison`1[UnityEngine::UIElements::UIR::
                UIRenderDevice+AllocToUpdate]::
                Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate___ctor
                          ((Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_ *)
                           this_01,(Object *)pOVar50,
                           MethodInfo__RTG__Object2ObjectSnap____c___CalculateSnapResult_b__14_0_RTG__Object2ObjectSnap__SnapSortData__RTG__Object2ObjectSnap__SnapSortData_
                           ,(MethodInfo *)0x0);
                TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_0 = this_01;
                ppCVar51 = &TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_0;
                goto code_?;
              }
              RStack_52 = (RegexCharClass_SingleRange)LStack_6._current;
              if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__RTG__ObjectBounds);
              }
              if (cRam_? == '\0') {
                func_?(&TypeInfo__RTG__GameObjectEx);
                func_?(&TypeInfo__RTG__ObjectBounds);
                cRam_? = '\x01';
              }
              if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__RTG__GameObjectEx);
              }
              RStack_17 = (RegexCharClass_SingleRange)
                          GameObjectEx::GameObjectEx_GetGameObjectType
                                    ((GameObject *)pOVar14,(MethodInfo *)0x0);
              if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              queryConfig.NoVolumeSize.x = (float)PStack_10.token;
              queryConfig.ObjectTypes = PStack_10.attrs;
              queryConfig.NoVolumeSize.y = fStack_27;
              queryConfig.NoVolumeSize.z = fStack_28;
              pAVar53 = ObjectBounds::ObjectBounds_CalcModelAABB
                                  ((AABB *)(auStack_22 + 4),(GameObject *)pOVar14,queryConfig,
                                   (GameObjectType__Enum)RStack_17,(MethodInfo *)0x0);
              pOStack_54 = (Object__StaticFields *)(pAVar53->_size).x;
              pIStack_55 = (Il2CppRGCTXData *)(pAVar53->_size).y;
              ppIStack_56 = (Il2CppClass **)(pAVar53->_size).z;
              pvStack_57 = (void *)(pAVar53->_center).x;
              _Stack_84 = *(_union_86 *)&pAVar53->_isValid;
              uVar58 = (pAVar53->_center).y;
              uVar59 = (pAVar53->_center).z;
              if ((char)_Stack_84.__klassIndex == '\0') {
                fStack_35 = (float)uVar58;
                pcStack_36 = (char *)uVar59;
                pOVar60 = OBB::OBB_GetInvalid((OBB *)auStack_21,(MethodInfo *)0x0);
                auStack_61._0_4_ = (pOVar60->_size).x;
                auStack_61._4_4_ = (pOVar60->_size).y;
                auStack_61._8_4_ = (pOVar60->_size).z;
                auStack_61._12_4_ = (pOVar60->_center).x;
                auStack_61._16_4_ = (pOVar60->_center).y;
                auStack_61._20_4_ = (pOVar60->_center).z;
                auStack_61._24_4_ = (pOVar60->_rotation).x;
                auStack_61._28_4_ = (pOVar60->_rotation).y;
                auStack_61._32_4_ = (pOVar60->_rotation).z;
                auStack_61._36_4_ = (pOVar60->_rotation).w;
                pMStack_62 = (MethodInfo *)(pOVar60->_rotation).z;
                pLStack_63 = (List_1_UnityEngine_Vector3_ *)(pOVar60->_rotation).w;
                RStack_17 = *(RegexCharClass_SingleRange *)&pOVar60->_isValid;
              }
              else {
                pvStack_57 = (void *)(pAVar53->_size).x;
                fStack_35 = (pAVar53->_size).y;
                pcStack_36 = (char *)(pAVar53->_size).z;
                _Var9 = (_union_86)(pAVar53->_center).x;
                pMStack_62 = (MethodInfo *)(pAVar53->_center).y;
                pLStack_63 = (List_1_UnityEngine_Vector3_ *)(pAVar53->_center).z;
                RStack_17 = (RegexCharClass_SingleRange)_Stack_84;
                if ((RegexCharClass_SingleRange)pOVar14 == (RegexCharClass_SingleRange)0x0)
                goto code_?;
                _Stack_84 = _Var9;
                worldTransform =
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)pOVar14,(MethodInfo *)0x0);
                func_?();
                modelSpaceAABB._size.y = fStack_35;
                modelSpaceAABB._size.x = (float)pvStack_57;
                modelSpaceAABB._size.z = (float)pcStack_36;
                modelSpaceAABB._center.x = (float)_Stack_84.dummy;
                modelSpaceAABB._center.y = (float)(MethodInfo *)_pMStack_30;
                modelSpaceAABB._center.z = (float)SUB84(_pMStack_30,4);
                modelSpaceAABB._24_4_ = RStack_17;
                OBB::OBB__ctor_7((OBB *)auStack_61,modelSpaceAABB,worldTransform,(MethodInfo *)0x0)
                ;
                pLStack_63 = (List_1_UnityEngine_Vector3_ *)auStack_61._36_4_;
                pMStack_62 = (MethodInfo *)auStack_61._32_4_;
                RStack_17.First = auStack_61._40_2_;
                RStack_17.Last = auStack_61._42_2_;
              }
              fStack_64 = (float)auStack_61._8_4_ + (float)pFStack_32;
              uStack_65 = CONCAT44((float)auStack_61._4_4_ + (float)pIStack_33,
                                    (float)auStack_61._0_4_ + (float)pIStack_34);
              fStack_66 = fStack_64;
              fStack_67 = (float)auStack_61._12_4_;
              pvStack_57 = (void *)auStack_61._16_4_;
              fStack_35 = (float)auStack_61._20_4_;
              pcStack_36 = (char *)auStack_61._24_4_;
              _Stack_84 = (_union_86)auStack_61._28_4_;
              if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0)
              {
                func_?();
              }
              this_00 = (RTScene *)
                        MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                  (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
              if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              _Var9 = _Stack_84;
              if (this_00 == (RTScene *)0x0) goto code_?;
              obb._size.z = fStack_66;
              obb._size.x = (float)(undefined4)uStack_65;
              obb._size.y = (float)uStack_65._4_4_;
              obb._center.x = fStack_67;
              obb._center.y = (float)pvStack_57;
              obb._center.z = fStack_35;
              obb._rotation.x = (float)pcStack_36;
              obb._rotation.y = (float)_Stack_84.dummy;
              obb._rotation.z = (float)(MethodInfo *)_pMStack_30;
              obb._rotation.w = (float)SUB84(_pMStack_30,4);
              obb._40_4_ = RStack_17;
              RTScene::RTScene_OverlapBox
                        (this_00,obb,
                         TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer,
                         (MethodInfo *)0x0);
              RStack_17 = (RegexCharClass_SingleRange)
                          TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer;
              pOVar16 = pOStack_15[4].klass;
              if (pOVar16 == (Object__Class *)0x0) {
                pOVar16 = (Object__Class *)func_?();
                mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                          ((Predicate_1_Object_ *)pOVar16,pOStack_15,
                           MethodInfo__RTG__Object2ObjectSnap____c__DisplayClass14_0___CalculateSnapResult_b__2_UnityEngine__GameObject_
                           ,(MethodInfo *)0x0);
                pOStack_15[4].klass = pOVar16;
                func_?();
              }
              _Var9 = _Stack_84;
              if (RStack_17 == (RegexCharClass_SingleRange)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__RemoveAll
                        ((List_1_System_Object_ *)RStack_17,(Predicate_1_Object_ *)pOVar16,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                        );
              if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pLVar25 = TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer;
              _Var9 = _Stack_84;
              if (pLVar25 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
            } while ((pLVar25->fields)._size == 0);
            if ((TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>->_1).
                cctor_finished_or_no_cctor == 0) {
              pOVar16 = (Object__Class *)&UNK_?;
              func_?();
            }
            pOVar68 = (Object2ObjectSnapDataDb *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>__get_Get__
                                );
            RVar69 = RStack_52;
            _Var9 = _Stack_84;
            if (pOVar68 == (Object2ObjectSnapDataDb *)0x0) goto code_?;
            RStack_52 = (RegexCharClass_SingleRange)
                        Object2ObjectSnapDataDb::Object2ObjectSnapDataDb_GetObject2ObjectSnapData
                                  (pOVar68,(GameObject *)RStack_52,(MethodInfo *)0x0);
          } while (RStack_52 == (RegexCharClass_SingleRange)0x0);
          RStack_44 = RVar69;
          func_?(&RStack_44,RVar69);
          _Var9 = _Stack_84;
          if (pOStack_37 == (Object__Class *)0x0) break;
          pOVar16 = pOStack_37;
          puVar70 = (undefined4 *)func_?(&stack0xfffffd44);
          ppMStack_71 = (MethodInfo **)0x0;
          LStack_7._list =
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*puVar70;
          LStack_7._index = puVar70[1];
          LStack_7._version = puVar70[2];
          LStack_7._current = *(RegexCharClass_SingleRange *)(puVar70 + 3);
          pLStack_72 = &LStack_7;
code_?:
          uStack_1._0_1_ = 3;
          bVar49 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                             (&LStack_7,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                             );
          RVar69 = LStack_7._current;
          if (bVar49 != 0) {
            RStack_17 = RStack_52;
            __Stack_e0 = (Il2CppType)
                         Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaDesc
                                   ((Object2ObjectSnapData *)RStack_52,
                                    (BoxFace__Enum)LStack_7._current,(MethodInfo *)0x0);
            pOVar60 = Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaBounds
                                ((OBB *)auStack_61,(Object2ObjectSnapData *)RStack_17,
                                 (BoxFace__Enum)RVar69,(MethodInfo *)0x0);
            OStack_8._size.x = (pOVar60->_size).x;
            OStack_8._size.y = (pOVar60->_size).y;
            OStack_8._size.z = (pOVar60->_size).z;
            OStack_8._center.x = (pOVar60->_center).x;
            OStack_8._center.y = (pOVar60->_center).y;
            OStack_8._center.z = (pOVar60->_center).z;
            OStack_8._rotation.x = (pOVar60->_rotation).x;
            OStack_8._rotation.y = (pOVar60->_rotation).y;
            OStack_8._rotation.z = (pOVar60->_rotation).z;
            OStack_8._rotation.w = (pOVar60->_rotation).w;
            OStack_8._isValid = pOVar60->_isValid;
            OStack_8._41_3_ = *(undefined3 *)&pOVar60->field_0x29;
            pLStack_73 = OBB::OBB_GetCenterAndCornerPoints(&OStack_8,(MethodInfo *)0x0);
            RStack_74 = RVar69;
            if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pOVar16 = (Object__Class *)
                      TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer;
            _Var9 = _Stack_84;
            if (pOVar16 != (Object__Class *)0x0) {
              puVar70 = (undefined4 *)func_?(&stack0xfffffd34);
              uStack_75._0_1_ = 0;
              uStack_75._1_1_ = 0;
              uStack_75._2_1_ = 0;
              uStack_75._3_1_ = 0;
              LStack_9._list = (List_1_System_Object_ *)*puVar70;
              LStack_9._index = puVar70[1];
              LStack_9._version = puVar70[2];
              LStack_9._current = (Object *)puVar70[3];
              pLStack_76 = &LStack_9;
              do {
                uStack_1._0_1_ = 5;
                do {
                  bVar49 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                           Object]::List_1_T_Enumerator_System_Object__MoveNext
                                     (&LStack_9,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                     );
                  pOVar14 = LStack_9._current;
                  if (bVar49 == 0) {
                    uStack_1._0_1_ = 3;
                    func_?();
                    goto code_?;
                  }
                  if ((TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pOVar68 = (Object2ObjectSnapDataDb *)
                            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                      (
                                      MethodInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>__get_Get__
                                      );
                  _Var9 = _Stack_84;
                  if (pOVar68 == (Object2ObjectSnapDataDb *)0x0) goto code_?;
                  pOVar16 = (Object__Class *)pOVar14;
                  RStack_17 = (RegexCharClass_SingleRange)
                              Object2ObjectSnapDataDb::
                              Object2ObjectSnapDataDb_GetObject2ObjectSnapData
                                        (pOVar68,(GameObject *)pOVar14,(MethodInfo *)0x0);
                } while (RStack_17 == (RegexCharClass_SingleRange)0x0);
                pOStack_77 = (Object__Class *)pOVar14;
                func_?();
                puVar70 = (undefined4 *)func_?();
                pEStack_78 = (EventInfo *)0x0;
                PStack_10.parent = (Il2CppClass *)*puVar70;
                PStack_10.name = (char *)puVar70[1];
                PStack_10.get = (MethodInfo *)puVar70[2];
                PStack_10.set = (MethodInfo *)puVar70[3];
                pPStack_79 = &PStack_10;
                while( true ) {
                  uStack_1._0_1_ = 7;
                  bVar49 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                           Text::RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                     ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)&PStack_10,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                                     );
                  pMVar19 = PStack_10.set;
                  if (bVar49 == 0) break;
                  pMStack_80 = PStack_10.set;
                  method_01 = (MethodInfo *)&UNK_?;
                  BVar81 = Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaDesc
                                     ((Object2ObjectSnapData *)RStack_17,
                                      (BoxFace__Enum)PStack_10.set,(MethodInfo *)0x0);
                  fStack_82 = BVar81.Area;
                  uVar83 = uStack_84 >> 8;
                  uStack_84 = uStack_84 & 0xffffff00;
                  if ((pIStack_40 != (Il2CppClass *)0x0) &&
                     ((void *)BVar81.AreaType == _Stack_e0.dummy)) {
                    fStack_85 = (float)((uint)(fStack_82 - fStack_86) & _UNK_?);
                    uStack_84 = CONCAT31((int3)uVar83,fStack_85 <= _UNK_?);
                  }
                  pOVar60 = Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaBounds
                                      ((OBB *)auStack_61,(Object2ObjectSnapData *)RStack_17,
                                       (BoxFace__Enum)pMVar19,(MethodInfo *)0x0);
                  pLVar87 = OBB::OBB_GetCenterAndCornerPoints
                                      ((OBB *)&stack0xfffffd54,(MethodInfo *)(pOVar60->_center).x);
                  pLStack_63 = pLVar87;
                  _Var9 = _Stack_84;
                  if (pLStack_73 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
                  puVar70 = (undefined4 *)func_?();
                  pIStack_88 = (Il2CppMethodPointer)0x0;
                  auStack_11._0_4_ = *puVar70;
                  auStack_11._4_4_ = puVar70[1];
                  auStack_11._8_4_ = puVar70[2];
                  auStack_11._12_4_ = puVar70[3];
                  auStack_11._16_4_ = puVar70[4];
                  auStack_11._20_4_ = puVar70[5];
                  pMStack_89 = (MethodInfo *)auStack_11;
                  while( true ) {
                    uStack_1._0_1_ = 9;
                    bVar49 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                             PlaneIdHelper+PlaneQuadrantInfo]::
                             List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                                       ((List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                        auStack_11,
                                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                       );
                    if (bVar49 == 0) break;
                    uStack_90 = CONCAT44(auStack_11._16_4_,auStack_11._12_4_);
                    fStack_91 = (float)auStack_11._20_4_;
                    fStack_92 = (float)auStack_11._20_4_;
                    uStack_93 = uStack_90;
                    _Var9 = _Stack_84;
                    if (pLVar87 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
                    pMVar19 = (MethodInfo *)&UNK_?;
                    puVar70 = (undefined4 *)func_?();
                    ppIStack_94 = (Il2CppClass **)0x0;
                    auStack_12._0_4_ = *puVar70;
                    auStack_12._4_4_ = puVar70[1];
                    auStack_12._8_4_ = puVar70[2];
                    auStack_12._12_4_ = puVar70[3];
                    auStack_12._16_4_ = ((_union_86 *)(puVar70 + 4))->dummy;
                    pIStack_13 = (Il2CppClass *)puVar70[5];
                    uStack_1._0_1_ = 0xb;
                    pIStack_95 = (Il2CppRuntimeInterfaceOffsetPair *)auStack_12;
                    while( true ) {
                      pOVar16 = (Object__Class *)auStack_12;
                      bVar49 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG
                               ::PlaneIdHelper+PlaneQuadrantInfo]::
                               List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                                         ((List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo_
                                           *)pOVar16,
                                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                         );
                      if (bVar49 == 0) break;
                      pcStack_36 = (char *)auStack_12._12_4_;
                      _Stack_84 = (_union_86)auStack_12._16_4_;
                      RStack_96 = (RegexCharClass_SingleRange)((float)pIStack_13 - fStack_91);
                      pIStack_97 = pIStack_13;
                      uStack_98 = CONCAT44((float)auStack_12._16_4_ - uStack_93._4_4_,
                                            (float)auStack_12._12_4_ - (float)uStack_93);
                      LStack_46._current = RStack_96;
                      fVar99 = (float10)func_?();
                      pIStack_100 = (Il2CppClass *)(float)fVar99;
                      pIStack_101 = pIStack_100;
                      if ((float)pIStack_100 < (float)pOStack_15[3].klass) {
                        uStack_102 = CONCAT44(_Stack_84.dummy,pcStack_36);
                        pIStack_103 = pIStack_97;
                        _Var9 = _Stack_84;
                        if (pIStack_42 == (Il2CppClass *)0x0) goto code_?;
                        func_?(pIStack_42,RStack_44,pOStack_77,RStack_74,pMStack_80,
                                        uStack_84,fStack_85,(undefined4)uStack_90,
                                        uStack_90._4_4_,fStack_92,pcStack_36,_Stack_84.dummy,
                                        pIStack_97);
                        if ((char)uStack_84 != '\0') {
                          bVar39 = true;
                        }
                      }
                    }
                    uStack_1._0_1_ = 9;
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              ((Object *)auStack_12,
                               (ExceptionArgument__Enum)
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                               ,pMVar19);
                    this = pIStack_42;
                  }
                  uStack_1._0_1_ = 7;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)pMStack_89,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                             ,method_01);
                }
                uStack_1._0_1_ = 5;
                func_?();
              } while( true );
            }
            break;
          }
          uStack_1 = CONCAT31(uStack_1._1_3_,1);
          func_?();
        }
      }
    }
  }
code_?:
  _Stack_84 = _Var9;
  func_?();
  func_?();
  pcVar104 = (code *)swi(3);
  pOVar105 = (Object2ObjectSnap_SnapResult *)(*pcVar104)();
  return pOVar105;
code_?:
  while( true ) {
    pUVar106 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
              UIRenderDevice+AllocToUpdate]::
              List_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate__get_Item
                        ((UIRenderDevice_AllocToUpdate *)(auStack_11 + 0x18),
                         (List_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_ *)
                         pIStack_41,0,
                         MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__get_Item_int_
                        );
    uStack_107 = pUVar106->id;
    uStack_108 = pUVar106->allocTime;
    uStack_65._0_4_ = pUVar106->meshHandle;
    uStack_65._4_4_ = (pUVar106->permAllocVerts).start;
    uStack_109 = (pUVar106->permAllocIndices).size;
    pOStack_110 = (pUVar106->permAllocIndices).handle;
    fStack_111 = *(float *)&(pUVar106->permAllocIndices).shortLived;
    pPStack_112 = pUVar106->permPage;
    if ((char)(pUVar106->permAllocVerts).size != '\0') break;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::Object2ObjectSnap+SnapSortData]::
    List_1_RTG_Object2ObjectSnap_SnapSortData__RemoveAt
              ((List_1_RTG_Object2ObjectSnap_SnapSortData_ *)this,0,
               MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__RemoveAt_int_
              );
  }
  if ((TypeInfo__RTG__Object2ObjectSnap____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_1;
  if (this_01 == (Comparison_1_RTG_Object2ObjectSnap_SnapSortData_ *)0x0) {
    if ((TypeInfo__RTG__Object2ObjectSnap____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar50 = TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9;
    this_01 = (Comparison_1_RTG_Object2ObjectSnap_SnapSortData_ *)func_?();
    mscorlib.dll::System::Comparison`1[UnityEngine::UIElements::UIR::UIRenderDevice+AllocToUpdate]::
    Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate___ctor
              ((Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_ *)this_01,
               (Object *)pOVar50,
               MethodInfo__RTG__Object2ObjectSnap____c___CalculateSnapResult_b__14_1_RTG__Object2ObjectSnap__SnapSortData__RTG__Object2ObjectSnap__SnapSortData_
               ,(MethodInfo *)0x0);
    TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_1 = this_01;
    ppCVar51 = &TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_1;
code_?:
    func_?(ppCVar51);
    this = pIStack_42;
  }
code_?:
  mscorlib.dll::System::Collections::Generic::List`1[RTG::Object2ObjectSnap+SnapSortData]::
  List_1_RTG_Object2ObjectSnap_SnapSortData__Sort_1
            ((List_1_RTG_Object2ObjectSnap_SnapSortData_ *)this,this_01,
             MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__Sort_System__Comparison<RTG::Object2ObjectSnap::SnapSortData>_
            );
  puVar70 = (undefined4 *)func_?();
  uStack_107 = *puVar70;
  uStack_108 = puVar70[1];
  uStack_65 = *(undefined8 *)(puVar70 + 2);
  PStack_10.attrs = puVar70[4];
  PStack_10.token = puVar70[5];
  fStack_27 = (float)puVar70[6];
  fStack_28 = (float)puVar70[7];
  LStack_46._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)puVar70[8]
  ;
  LStack_46._index = puVar70[9];
  LStack_46._version = puVar70[10];
  LStack_46._current = *(RegexCharClass_SingleRange *)(puVar70 + 0xb);
  puVar70 = (undefined4 *)func_?(auStack_11 + 0x18,this,0);
  uStack_107 = *puVar70;
  uStack_108 = puVar70[1];
  uStack_65 = *(undefined8 *)(puVar70 + 2);
  fStack_66 = (float)puVar70[4];
  fStack_67 = (float)puVar70[5];
  uStack_113 = puVar70[6];
  uStack_114 = puVar70[7];
  uStack_115 = puVar70[8];
  fStack_116 = (float)puVar70[9];
  fStack_117 = (float)puVar70[10];
  fStack_64 = (float)puVar70[0xb];
  uStack_109 = uStack_115;
  pOStack_110 = (Object *)fStack_116;
  fStack_111 = fStack_117;
  pPStack_112 = (Page *)fStack_64;
  iVar18 = func_?(auStack_118,this,0,
                           MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__get_Item_int_
                          );
  fVar119 = *(float *)(iVar18 + 0x30);
  *(undefined4 *)__return_storage_ptr__ = 1;
  (__return_storage_ptr__->_snapPivot).x = fStack_27;
  (__return_storage_ptr__->_snapPivot).y = fStack_28;
  (__return_storage_ptr__->_snapPivot).z = (float)LStack_46._list;
  (__return_storage_ptr__->_snapDestination).x = (float)pOStack_110;
  (__return_storage_ptr__->_snapDestination).y = fStack_111;
  (__return_storage_ptr__->_snapDestination).z = fStack_64;
  __return_storage_ptr__->_snapDistance = fVar119;
  __return_storage_ptr__->_failReason = 0;
  *unaff_FS_OFFSET = uStack_3;
  return __return_storage_ptr__;
}


/* Object2ObjectSnap+SnapResult Snap(List`1[UnityEngine.GameObject], Object2ObjectSnap+Config) */

Object2ObjectSnap_SnapResult *
Assembly-CSharp.dll::RTG::Object2ObjectSnap::Object2ObjectSnap_Snap
          (Object2ObjectSnap_SnapResult *__return_storage_ptr__,
          List_1_UnityEngine_GameObject_ *roots,Object2ObjectSnap_Config snapConfig,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff34;
  puVar5 = &stack0xffffff34;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&TypeInfo__RTG__Object2ObjectSnap);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  OStack_6._failReason = 0;
  OStack_6._success = 0;
  OStack_6._1_3_ = 0;
  OStack_6._snapPivot.x = 0.0;
  OStack_6._snapPivot.y = 0.0;
  OStack_6._snapPivot.z = 0.0;
  OStack_6._snapDestination.x = 0.0;
  OStack_6._snapDestination.y = 0.0;
  OStack_6._snapDestination.z = 0.0;
  OStack_6._snapDistance = 0.0;
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  fStack_8 = _UNK_?;
  Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor
            (&OStack_6,Object2ObjectSnap_SnapFailReson__Enum_NoDestinationFound,(MethodInfo *)0x0);
  if (roots != (List_1_UnityEngine_GameObject_ *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_10,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)roots,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    uStack_11 = 0;
    LStack_7._list = (List_1_System_Object_ *)pLVar9->_list;
    LStack_7._index = pLVar9->_index;
    LStack_7._version = pLVar9->_version;
    LStack_7._current = *(Object **)&pLVar9->_current;
    uStack_1 = 1;
    LStack_10._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
         OStack_6._snapDestination.x;
    LStack_10._index = (int32_t)OStack_6._snapDestination.y;
    LStack_10._version = (int32_t)OStack_6._snapDestination.z;
    LStack_10._current = (RegexCharClass_SingleRange)OStack_6._snapDistance;
    uStack_12._0_1_ = OStack_6._success;
    uStack_12._1_3_ = OStack_6._1_3_;
    uStack_13 = OStack_6._snapPivot.x;
    uStack_14 = OStack_6._snapPivot.y;
    uStack_15 = OStack_6._snapPivot.z;
    pLStack_16 = &LStack_7;
    while( true ) {
      bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_7,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      root = LStack_7._current;
      if (bVar17 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   ,in_stack_18);
        uStack_1 = 0xffffffff;
        bVar17 = 0;
        if ((bool)uStack_12 != 0) {
          pivot.y = OStack_6._snapPivot.y;
          pivot.x = OStack_6._snapPivot.x;
          pivot.z._0_1_ = (undefined1)uStack_15;
          pivot.z._1_1_ = uStack_15._1_1_;
          pivot.z._2_1_ = uStack_15._2_1_;
          pivot.z._3_1_ = uStack_15._3_1_;
          dest.y = (float)LStack_10._index;
          dest.x = (float)LStack_10._list;
          dest.z = (float)LStack_10._version;
          ObjectSnap::ObjectSnap_Snap_1(roots,pivot,dest,(MethodInfo *)0x0);
          bVar17 = (bool)uStack_12;
        }
        __return_storage_ptr__->_success = bVar17;
        __return_storage_ptr__->field_0x1 = uStack_12._1_1_;
        __return_storage_ptr__->field_0x2 = uStack_12._2_1_;
        __return_storage_ptr__->field_0x3 = uStack_12._3_1_;
        *(undefined1 *)&(__return_storage_ptr__->_snapPivot).x = (undefined1)uStack_13;
        *(undefined1 *)((int)&(__return_storage_ptr__->_snapPivot).x + 1) = uStack_13._1_1_;
        *(undefined1 *)((int)&(__return_storage_ptr__->_snapPivot).x + 2) = uStack_13._2_1_;
        *(undefined1 *)((int)&(__return_storage_ptr__->_snapPivot).x + 3) = uStack_13._3_1_;
        *(undefined1 *)&(__return_storage_ptr__->_snapPivot).y = (undefined1)uStack_14;
        *(undefined1 *)((int)&(__return_storage_ptr__->_snapPivot).y + 1) = uStack_14._1_1_;
        *(undefined1 *)((int)&(__return_storage_ptr__->_snapPivot).y + 2) = uStack_14._2_1_;
        *(undefined1 *)((int)&(__return_storage_ptr__->_snapPivot).y + 3) = uStack_14._3_1_;
        *(undefined1 *)&(__return_storage_ptr__->_snapPivot).z = (undefined1)uStack_15;
        *(undefined1 *)((int)&(__return_storage_ptr__->_snapPivot).z + 1) = uStack_15._1_1_;
        *(undefined1 *)((int)&(__return_storage_ptr__->_snapPivot).z + 2) = uStack_15._2_1_;
        *(undefined1 *)((int)&(__return_storage_ptr__->_snapPivot).z + 3) = uStack_15._3_1_;
        (__return_storage_ptr__->_snapDestination).x = (float)LStack_10._list;
        (__return_storage_ptr__->_snapDestination).y = (float)LStack_10._index;
        (__return_storage_ptr__->_snapDestination).z = (float)LStack_10._version;
        __return_storage_ptr__->_snapDistance = (float)LStack_10._current;
        __return_storage_ptr__->_failReason = OStack_6._failReason;
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar19 = Object2ObjectSnap_CalculateSnapResult
                         ((Object2ObjectSnap_SnapResult *)&stack0xffffff40,(GameObject *)root,
                          snapConfig,(MethodInfo *)0x0);
      if (pOVar19->_failReason == 1) break;
      if ((pOVar19->_failReason == 0) && (pOVar19->_snapDistance < fStack_8)) {
        OStack_6._success = pOVar19->_success;
        OStack_6._1_3_ = *(undefined3 *)&pOVar19->field_0x1;
        OStack_6._snapPivot.x = (pOVar19->_snapPivot).x;
        OStack_6._snapPivot.y = (pOVar19->_snapPivot).y;
        OStack_6._snapPivot.z = (pOVar19->_snapPivot).z;
        OStack_6._snapDestination.x = (pOVar19->_snapDestination).x;
        OStack_6._snapDestination.y = (pOVar19->_snapDestination).y;
        OStack_6._snapDestination.z = (pOVar19->_snapDestination).z;
        OStack_6._snapDistance = pOVar19->_snapDistance;
        OStack_6._failReason = 0;
        uStack_12 = (float)OStack_6._0_4_;
        uStack_13 = OStack_6._snapPivot.x;
        uStack_14 = OStack_6._snapPivot.y;
        uStack_15 = OStack_6._snapPivot.z;
        LStack_10._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             OStack_6._snapDestination.x;
        LStack_10._index = (int32_t)OStack_6._snapDestination.y;
        LStack_10._version = (int32_t)OStack_6._snapDestination.z;
        LStack_10._current = (RegexCharClass_SingleRange)OStack_6._snapDistance;
        fStack_8 = pOVar19->_snapDistance;
      }
    }
    LStack_10._list = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)pOVar19;
    LStack_10._index = (int32_t)(pOVar19->_snapPivot).x;
    LStack_10._version = (int32_t)(pOVar19->_snapPivot).y;
    LStack_10._current = (RegexCharClass_SingleRange)(pOVar19->_snapPivot).z;
    uStack_1 = 0xffffffff;
    uStack_12 = (pOVar19->_snapDestination).x;
    uStack_13 = (pOVar19->_snapDestination).y;
    uStack_14 = (pOVar19->_snapDestination).z;
    uStack_15 = pOVar19->_snapDistance;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,(MethodInfo *)(pOVar19->_snapDestination).x);
    *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)__return_storage_ptr__ =
         LStack_10._list;
    (__return_storage_ptr__->_snapPivot).x = (float)LStack_10._index;
    (__return_storage_ptr__->_snapPivot).y = (float)LStack_10._version;
    (__return_storage_ptr__->_snapPivot).z = (float)LStack_10._current;
    (__return_storage_ptr__->_snapDestination).x = uStack_12;
    (__return_storage_ptr__->_snapDestination).y = uStack_13;
    (__return_storage_ptr__->_snapDestination).z = uStack_14;
    __return_storage_ptr__->_snapDistance = uStack_15;
    __return_storage_ptr__->_failReason = 1;
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  pOVar19 = (Object2ObjectSnap_SnapResult *)(*pcVar20)();
  return pOVar19;
}


/* Object2ObjectSnap+SnapResult Snap(GameObject, Object2ObjectSnap+Config) */

Object2ObjectSnap_SnapResult *
Assembly-CSharp.dll::RTG::Object2ObjectSnap::Object2ObjectSnap_Snap_1
          (Object2ObjectSnap_SnapResult *__return_storage_ptr__,GameObject *root,
          Object2ObjectSnap_Config snapConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Object2ObjectSnap);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__RTG__Object2ObjectSnap;
  *(undefined4 *)__return_storage_ptr__ = 0;
  (__return_storage_ptr__->_snapPivot).x = 0.0;
  (__return_storage_ptr__->_snapPivot).y = 0.0;
  (__return_storage_ptr__->_snapPivot).z = 0.0;
  uVar2 = (pOVar1->_1).cctor_finished_or_no_cctor;
  (__return_storage_ptr__->_snapDestination).x = 0.0;
  (__return_storage_ptr__->_snapDestination).y = 0.0;
  (__return_storage_ptr__->_snapDestination).z = 0.0;
  __return_storage_ptr__->_snapDistance = 0.0;
  __return_storage_ptr__->_failReason = 0;
  if (uVar2 == 0) {
    func_?(pOVar1);
  }
  pOVar3 = Object2ObjectSnap_CalculateSnapResult
                      ((Object2ObjectSnap_SnapResult *)&stack0xffffffb4,root,snapConfig,
                       (MethodInfo *)0x0);
  uVar4 = *(undefined3 *)&pOVar3->field_0x1;
  fVar5 = (pOVar3->_snapPivot).x;
  fVar6 = (pOVar3->_snapPivot).y;
  fVar7 = (pOVar3->_snapPivot).z;
  __return_storage_ptr__->_success = pOVar3->_success;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar4;
  (__return_storage_ptr__->_snapPivot).x = fVar5;
  (__return_storage_ptr__->_snapPivot).y = fVar6;
  (__return_storage_ptr__->_snapPivot).z = fVar7;
  fVar5 = (pOVar3->_snapDestination).y;
  fVar6 = (pOVar3->_snapDestination).z;
  fVar7 = pOVar3->_snapDistance;
  iVar8 = pOVar3->_failReason;
  (__return_storage_ptr__->_snapDestination).x = (pOVar3->_snapDestination).x;
  (__return_storage_ptr__->_snapDestination).y = fVar5;
  (__return_storage_ptr__->_snapDestination).z = fVar6;
  __return_storage_ptr__->_snapDistance = fVar7;
  __return_storage_ptr__->_failReason = iVar8;
  if (__return_storage_ptr__->_success == 0) {
    return __return_storage_ptr__;
  }
  uVar9 = (__return_storage_ptr__->_snapPivot).x;
  uVar10 = (__return_storage_ptr__->_snapPivot).y;
  fVar5 = (__return_storage_ptr__->_snapPivot).z;
  uVar11 = (__return_storage_ptr__->_snapDestination).x;
  uVar12 = (__return_storage_ptr__->_snapDestination).y;
  fVar6 = (__return_storage_ptr__->_snapDestination).z;
  if (root != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (root,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd8,this,(MethodInfo *)0x0);
      uVar14 = pVVar13->x;
      uVar15 = pVVar13->y;
      value.y = (float)uVar12 + ((float)uVar15 - (float)uVar10);
      value.x = (float)uVar11 + ((float)uVar14 - (float)uVar9);
      value.z = fVar6 + (pVVar13->z - fVar5);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this,value,(MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  pOVar3 = (Object2ObjectSnap_SnapResult *)(*pcVar16)();
  return pOVar3;
}


/* Object2ObjectSnap() */

void Assembly-CSharp.dll::RTG::Object2ObjectSnap::Object2ObjectSnap__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&TypeInfo__RTG__Object2ObjectSnap);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_GameObject_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer = this;
  func_?(TypeInfo__RTG__Object2ObjectSnap->static_fields,this);
  pOVar1 = TypeInfo__RTG__Object2ObjectSnap->static_fields;
  (pOVar1->_defaultConfig)._areaMatchEps = 0.0;
  (pOVar1->_defaultConfig).IgnoreDestObjects = (List_1_UnityEngine_GameObject_ *)0x0;
  (pOVar1->_defaultConfig).DestinationLayers = 0;
  (pOVar1->_defaultConfig).SnapRadius = 0.0;
  (pOVar1->_defaultConfig).Prefs = 0;
  (TypeInfo__RTG__Object2ObjectSnap->static_fields->_defaultConfig)._areaMatchEps =
       (float)(_UNK_? & _UNK_?);
  (TypeInfo__RTG__Object2ObjectSnap->static_fields->_defaultConfig).Prefs = 0;
  return;
}


/* Object2ObjectSnap+Config get_DefaultConfig() */

Object2ObjectSnap_Config *
Assembly-CSharp.dll::RTG::Object2ObjectSnap::Object2ObjectSnap_get_DefaultConfig
          (Object2ObjectSnap_Config *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Object2ObjectSnap);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Object2ObjectSnap);
  }
  pOVar1 = TypeInfo__RTG__Object2ObjectSnap->static_fields;
  pLVar2 = (pOVar1->_defaultConfig).IgnoreDestObjects;
  iVar3 = (pOVar1->_defaultConfig).DestinationLayers;
  fVar4 = (pOVar1->_defaultConfig).SnapRadius;
  iVar5 = (pOVar1->_defaultConfig).Prefs;
  __return_storage_ptr__->_areaMatchEps = (pOVar1->_defaultConfig)._areaMatchEps;
  __return_storage_ptr__->IgnoreDestObjects = pLVar2;
  __return_storage_ptr__->DestinationLayers = iVar3;
  __return_storage_ptr__->SnapRadius = fVar4;
  __return_storage_ptr__->Prefs = iVar5;
  return __return_storage_ptr__;
}

