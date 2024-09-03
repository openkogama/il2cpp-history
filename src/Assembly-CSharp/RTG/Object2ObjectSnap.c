
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
  puStack_4 = &stack0xfffffce4;
  puVar5 = &stack0xfffffce4;
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
  LStack_10._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_10._index = 0;
  LStack_10._version = 0;
  LStack_10._current.First = 0;
  LStack_10._current.Last = 0;
  func_?(&OStack_11,0,0x2c);
  LStack_12._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  LStack_12._index = 0;
  LStack_12._version = 0;
  LStack_12._current.Quadrant = 0;
  LStack_12._current.FirstAxisSign = 0;
  LStack_12._current.SecondAxisSign._0_2_ = 0;
  LStack_12._current.SecondAxisSign._2_2_ = 0;
  auStack_13._0_4_ = (Predicate_1_Object___Class *)0x0;
  auStack_13._4_4_ = (MonitorData *)0x0;
  auStack_13._8_4_ = (void *)0x0;
  auStack_13._12_4_ = (void *)0x0;
  auStack_13._16_4_ = (Object *)0x0;
  auStack_13._20_4_ = (MethodInfo_1 *)0x0;
  this = (UxmlObjectListAttributeDescription_1_System_Object_ *)
         func_?(TypeInfo__RTG__Object2ObjectSnap____c__DisplayClass14_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this,(MethodInfo *)0x0);
  pUStack_14 = this;
  if (this == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) goto code_?;
  (this->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)root;
  func_?();
  this[1].klass =
       (UxmlObjectListAttributeDescription_1_System_Object___Class *)snapConfig._areaMatchEps;
  this[1].monitor = (MonitorData *)snapConfig.IgnoreDestObjects;
  this[1].fields._._defaultValue_k__BackingField =
       (List_1_System_Object_ *)snapConfig.DestinationLayers;
  this[2].klass =
       (UxmlObjectListAttributeDescription_1_System_Object___Class *)snapConfig.SnapRadius;
  this[2].monitor = (MonitorData *)snapConfig.Prefs;
  func_?(&this[1].monitor,0);
  if (this[1].monitor == (MonitorData *)0x0) {
    this_00 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>)
    ;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    this[1].monitor = (MonitorData *)this_00;
    func_?(&this[1].monitor,this_00);
  }
  pLVar15 = (this->fields)._._defaultValue_k__BackingField;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  RStack_16 = (RegexCharClass_SingleRange)
              GameObjectEx::GameObjectEx_GetAllChildrenAndSelf
                        ((GameObject *)pLVar15,(MethodInfo *)0x0);
  if (RStack_16 == (RegexCharClass_SingleRange)0x0) goto code_?;
  iVar17 = *(int32_t *)((int)RStack_16 + 0xc);
  if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
    root = (GameObject *)TypeInfo__RTG__Object2ObjectSnap;
    func_?();
  }
  if (100 < iVar17) {
    failReson = Object2ObjectSnap_SnapFailReson__Enum_MaxObjectsExceeded;
code_?:
    OStack_18._failReason = 0;
    OStack_18._snapDestination.x = 0.0;
    OStack_18._snapDestination.y = 0.0;
    OStack_18._snapDestination.z = 0.0;
    OStack_18._snapDistance = 0.0;
    OStack_18._success = 0;
    OStack_18._1_3_ = 0;
    OStack_18._snapPivot.x = 0.0;
    OStack_18._snapPivot.y = 0.0;
    OStack_18._snapPivot.z = 0.0;
    Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor
              (&OStack_18,failReson,(MethodInfo *)root);
code_?:
    __return_storage_ptr__->_success = OStack_18._success;
    *(undefined3 *)&__return_storage_ptr__->field_0x1 = OStack_18._1_3_;
    (__return_storage_ptr__->_snapPivot).x = OStack_18._snapPivot.x;
    (__return_storage_ptr__->_snapPivot).y = OStack_18._snapPivot.y;
    (__return_storage_ptr__->_snapPivot).z = OStack_18._snapPivot.z;
code_?:
    (__return_storage_ptr__->_snapDestination).x = OStack_18._snapDestination.x;
    (__return_storage_ptr__->_snapDestination).y = OStack_18._snapDestination.y;
    (__return_storage_ptr__->_snapDestination).z = OStack_18._snapDestination.z;
    __return_storage_ptr__->_snapDistance = OStack_18._snapDistance;
    __return_storage_ptr__->_failReason = OStack_18._failReason;
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
  pLVar15 = (this->fields)._._defaultValue_k__BackingField;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  pLVar19 = GameObjectEx::GameObjectEx_GetMeshObjectsInHierarchy
                      ((GameObject *)pLVar15,(MethodInfo *)0x0);
  pLVar20 = GameObjectEx::GameObjectEx_GetSpriteObjectsInHierarchy
                      ((GameObject *)(this->fields)._._defaultValue_k__BackingField,
                       (MethodInfo *)0x0);
  if (pLVar19 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
  if ((pLVar19->fields)._size == 0) {
    if (pLVar20 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
    if ((pLVar20->fields)._size == 0) {
      root = (GameObject *)0x0;
      failReson = Object2ObjectSnap_SnapFailReson__Enum_InvalidSourceObjects;
      goto code_?;
    }
  }
  uStack_21 = 0;
  uStack_22 = 0;
  fStack_23 = 0.0;
  uStack_24 = 5;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar26 = (pVVar25->oneVector).x;
  uVar27 = (pVVar25->oneVector).y;
  OStack_18._failReason = (int32_t)(pVVar25->oneVector).z;
  pUVar28 = this[2].klass;
  fStack_29 = (float)OStack_18._failReason * (float)pUVar28 +
              (float)OStack_18._failReason * (float)pUVar28;
  fStack_30 = (float)uVar27 * (float)pUVar28 + (float)uVar27 * (float)pUVar28;
  fStack_31 = (float)uVar26 * (float)pUVar28 + (float)uVar26 * (float)pUVar28;
  OStack_18._snapDestination.z = (float)uVar26;
  OStack_18._snapDistance = (float)uVar27;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pPStack_32 = (Predicate_1_Object_ *)BoxMath::BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  pDStack_33 = (Delegate__Array *)((uint)this[2].monitor & 1);
  bVar34 = false;
  pDStack_35 = pDStack_33;
  this_01 = (List_1_RTG_Object2ObjectSnap_SnapSortData_ *)func_?();
  pLStack_36 = this_01;
  pLStack_37 = this_01;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)this_01,10,
             MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__List_int_
            );
  this_04 = (Predicate_1_Object_ *)0x34;
  pLStack_38 = this_01;
  func_?(&RStack_39,0);
  pLVar40 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                      (&LStack_41,
                       (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       RStack_16,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                      );
  uStack_42 = 0;
  LStack_6._list = (List_1_System_Object_ *)pLVar40->_list;
  LStack_6._index = pLVar40->_index;
  LStack_6._version = pLVar40->_version;
  LStack_6._current = *(Object **)&pLVar40->_current;
  pLStack_43 = &LStack_6;
  uStack_1 = 0;
  while( true ) {
    uStack_1._0_1_ = 1;
    do {
      do {
        bVar44 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           (&LStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                           );
        pOVar45 = LStack_6._current;
        if (bVar44 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)pLStack_43,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                     ,(MethodInfo *)this_04);
          uStack_1._0_1_ = 0xff;
          uStack_1._1_3_ = 0xffffff;
          if (this_01 == (List_1_RTG_Object2ObjectSnap_SnapSortData_ *)0x0) goto code_?;
          if ((this_01->fields)._size == 0) {
            iStack_46 = 0;
            fStack_47 = 0.0;
            fStack_48 = 0.0;
            fStack_49 = 0.0;
            fStack_50 = 0.0;
            fStack_51 = 0.0;
            fStack_52 = 0.0;
            fStack_53 = 0.0;
            fStack_54 = 0.0;
            Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor
                      ((Object2ObjectSnap_SnapResult *)&fStack_47,
                       Object2ObjectSnap_SnapFailReson__Enum_NoDestinationFound,(MethodInfo *)0x0);
            *(float *)__return_storage_ptr__ = fStack_47;
            (__return_storage_ptr__->_snapPivot).x = fStack_48;
            (__return_storage_ptr__->_snapPivot).y = fStack_49;
            (__return_storage_ptr__->_snapPivot).z = fStack_50;
            OStack_18._failReason = iStack_46;
            OStack_18._snapDestination.x = fStack_51;
            OStack_18._snapDestination.y = fStack_52;
            OStack_18._snapDestination.z = fStack_53;
            OStack_18._snapDistance = fStack_54;
            goto code_?;
          }
          if ((pDStack_33 != (Delegate__Array *)0x0) && (bVar34)) goto code_?;
          if ((TypeInfo__RTG__Object2ObjectSnap____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this_03 = TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_0;
          if (this_03 != (Comparison_1_RTG_Object2ObjectSnap_SnapSortData_ *)0x0)
          goto code_?;
          if ((TypeInfo__RTG__Object2ObjectSnap____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar55 = TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9;
          this_03 = (Comparison_1_RTG_Object2ObjectSnap_SnapSortData_ *)func_?();
          mscorlib.dll::System::Comparison`1[UnityEngine::UIElements::UIR::
          UIRenderDevice+AllocToUpdate]::
          Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate___ctor
                    ((Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_ *)
                     this_03,(Object *)pOVar55,
                     MethodInfo__RTG__Object2ObjectSnap____c___CalculateSnapResult_b__14_0_RTG__Object2ObjectSnap__SnapSortData__RTG__Object2ObjectSnap__SnapSortData_
                     ,(MethodInfo *)0x0);
          TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_0 = this_03;
          ppCVar56 = &TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_0;
          goto code_?;
        }
        RStack_57 = (RegexCharClass_SingleRange)LStack_6._current;
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__ObjectBounds);
        }
        queryConfig.NoVolumeSize.x = (float)uStack_21;
        queryConfig.ObjectTypes = uStack_24;
        queryConfig.NoVolumeSize.y = (float)uStack_22;
        queryConfig.NoVolumeSize.z = fStack_23;
        pOVar58 = ObjectBounds::ObjectBounds_CalcWorldOBB
                            ((OBB *)(auStack_59 + 8),(GameObject *)pOVar45,queryConfig,
                             (MethodInfo *)0x0);
        fStack_48 = (pOVar58->_center).x;
        OStack_18._snapDestination.y = (pOVar58->_center).y;
        OStack_18._snapDestination.z = (pOVar58->_center).z;
        OStack_18._snapDistance = (pOVar58->_rotation).x;
        OStack_18._failReason = (int32_t)(pOVar58->_rotation).y;
        pvStack_60 = (void *)(pOVar58->_rotation).z;
        pLStack_61 = (List_1_UnityEngine_Vector3_ *)(pOVar58->_rotation).w;
        RStack_16 = *(RegexCharClass_SingleRange *)&pOVar58->_isValid;
        fStack_47 = (pOVar58->_size).z + fStack_29;
        uStack_62 = CONCAT44((pOVar58->_size).y + fStack_30,(pOVar58->_size).x + fStack_31);
        fStack_63 = fStack_47;
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_02 = (RTScene *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
        if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (this_02 == (RTScene *)0x0) goto code_?;
        obb._size.z = fStack_47;
        obb._size.x = (float)(undefined4)uStack_62;
        obb._size.y = (float)uStack_62._4_4_;
        obb._center.x = fStack_48;
        obb._center.y = OStack_18._snapDestination.y;
        obb._center.z = OStack_18._snapDestination.z;
        obb._rotation.x = OStack_18._snapDistance;
        obb._rotation.y = (float)OStack_18._failReason;
        obb._rotation.z = (float)(void *)_pvStack_a4;
        obb._rotation.w = (float)SUB84(_pvStack_a4,4);
        obb._40_4_ = RStack_16;
        RTScene::RTScene_OverlapBox
                  (this_02,obb,TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer,
                   (MethodInfo *)0x0);
        RStack_16 = (RegexCharClass_SingleRange)
                    TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer;
        this_04 = (Predicate_1_Object_ *)pUStack_14[2].fields._._defaultValue_k__BackingField;
        if (this_04 == (Predicate_1_Object_ *)0x0) {
          this_04 = (Predicate_1_Object_ *)func_?();
          mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                    (this_04,(Object *)pUStack_14,
                     MethodInfo__RTG__Object2ObjectSnap____c__DisplayClass14_0___CalculateSnapResult_b__2_UnityEngine__GameObject_
                     ,(MethodInfo *)0x0);
          pUStack_14[2].fields._._defaultValue_k__BackingField = (List_1_System_Object_ *)this_04;
          func_?();
        }
        if (RStack_16 == (RegexCharClass_SingleRange)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAll
                  ((List_1_System_Object_ *)RStack_16,this_04,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                  );
        if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pLVar19 = TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer;
        if (pLVar19 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      } while ((pLVar19->fields)._size == 0);
      if ((TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>->_1).cctor_finished_or_no_cctor ==
          0) {
        this_04 = (Predicate_1_Object_ *)&UNK_?;
        func_?();
      }
      pOVar64 = (Object2ObjectSnapDataDb *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>__get_Get__);
      RVar65 = RStack_57;
      if (pOVar64 == (Object2ObjectSnapDataDb *)0x0) goto code_?;
      RStack_57 = (RegexCharClass_SingleRange)
                  Object2ObjectSnapDataDb::Object2ObjectSnapDataDb_GetObject2ObjectSnapData
                            (pOVar64,(GameObject *)RStack_57,(MethodInfo *)0x0);
    } while (RStack_57 == (RegexCharClass_SingleRange)0x0);
    method_00 = (RegexCharClass_SingleRange)&RStack_39;
    RStack_39 = RVar65;
    func_?(method_00,RVar65);
    if (pPStack_32 == (Predicate_1_Object_ *)0x0) break;
    this_04 = pPStack_32;
    puVar66 = (undefined4 *)func_?(&puStack_67);
    uStack_68 = 0;
    LStack_7._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*puVar66
    ;
    LStack_7._index = puVar66[1];
    LStack_7._version = puVar66[2];
    LStack_7._current = *(RegexCharClass_SingleRange *)(puVar66 + 3);
    pLStack_69 = &LStack_7;
code_?:
    uStack_1._0_1_ = 3;
    bVar44 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
             RegularExpressions::RegexCharClass+SingleRange]::
             List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                       (&LStack_7,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                       );
    RVar65 = LStack_7._current;
    if (bVar44 != 0) {
      RStack_16 = RStack_57;
      join_0x00000008_0x00000000_ =
           Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaDesc
                     ((Object2ObjectSnapData *)RStack_57,(BoxFace__Enum)LStack_7._current,
                      (MethodInfo *)0x0);
      method_00 = RStack_16;
      pOVar58 = Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaBounds
                          ((OBB *)(auStack_59 + 8),(Object2ObjectSnapData *)RStack_16,
                           (BoxFace__Enum)RVar65,(MethodInfo *)0x0);
      OStack_8._size.x = (pOVar58->_size).x;
      OStack_8._size.y = (pOVar58->_size).y;
      OStack_8._size.z = (pOVar58->_size).z;
      OStack_8._center.x = (pOVar58->_center).x;
      OStack_8._center.y = (pOVar58->_center).y;
      OStack_8._center.z = (pOVar58->_center).z;
      OStack_8._rotation.x = (pOVar58->_rotation).x;
      OStack_8._rotation.y = (pOVar58->_rotation).y;
      OStack_8._rotation.z = (pOVar58->_rotation).z;
      OStack_8._rotation.w = (pOVar58->_rotation).w;
      OStack_8._isValid = pOVar58->_isValid;
      OStack_8._41_3_ = *(undefined3 *)&pOVar58->field_0x29;
      pLStack_70 = OBB::OBB_GetCenterAndCornerPoints(&OStack_8,(MethodInfo *)0x0);
      RStack_71 = RVar65;
      if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_04 = (Predicate_1_Object_ *)
                TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer;
      if (this_04 != (Predicate_1_Object_ *)0x0) {
        puVar66 = (undefined4 *)func_?(auStack_72);
        uStack_73 = 0;
        LStack_9._list = (List_1_System_Object_ *)*puVar66;
        LStack_9._index = puVar66[1];
        LStack_9._version = puVar66[2];
        LStack_9._current = (Object *)puVar66[3];
        pLStack_74 = &LStack_9;
        do {
          uStack_1._0_1_ = 5;
          do {
            bVar44 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_9,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                               );
            pOVar45 = LStack_9._current;
            if (bVar44 == 0) {
              uStack_1._0_1_ = 3;
              func_?();
              goto code_?;
            }
            if ((TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pOVar64 = (Object2ObjectSnapDataDb *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>__get_Get__
                                );
            if (pOVar64 == (Object2ObjectSnapDataDb *)0x0) goto code_?;
            this_04 = (Predicate_1_Object_ *)pOVar45;
            RStack_16 = (RegexCharClass_SingleRange)
                        Object2ObjectSnapDataDb::Object2ObjectSnapDataDb_GetObject2ObjectSnapData
                                  (pOVar64,(GameObject *)pOVar45,(MethodInfo *)0x0);
          } while (RStack_16 == (RegexCharClass_SingleRange)0x0);
          pPStack_75 = (Predicate_1_Object_ *)pOVar45;
          func_?();
          puVar66 = (undefined4 *)func_?();
          uStack_76 = 0;
          LStack_10._list =
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*puVar66;
          LStack_10._index = puVar66[1];
          LStack_10._version = puVar66[2];
          LStack_10._current = *(RegexCharClass_SingleRange *)(puVar66 + 3);
          pLStack_77 = &LStack_10;
          while( true ) {
            uStack_1._0_1_ = 7;
            bVar44 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                               (&LStack_10,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                               );
            RVar65 = LStack_10._current;
            if (bVar44 == 0) break;
            RStack_78 = LStack_10._current;
            method_02 = (MethodInfo *)&UNK_?;
            BVar79 = Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaDesc
                               ((Object2ObjectSnapData *)RStack_16,
                                (BoxFace__Enum)LStack_10._current,(MethodInfo *)0x0);
            fStack_80 = BVar79.Area;
            uVar81 = uStack_82 >> 8;
            uStack_82 = uStack_82 & 0xffffff00;
            if ((pDStack_35 != (Delegate__Array *)0x0) &&
               ((void *)BVar79.AreaType == (void *)auStack_13._24_4_)) {
              fStack_83 = (float)((uint)(fStack_80 - (float)pvStack_84) & _UNK_?);
              uStack_82 = CONCAT31((int3)uVar81,fStack_83 <= _UNK_?);
            }
            pOVar58 = Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaBounds
                                ((OBB *)(auStack_59 + 8),(Object2ObjectSnapData *)RStack_16,
                                 (BoxFace__Enum)RVar65,(MethodInfo *)0x0);
            OStack_11._size.x = (pOVar58->_size).x;
            OStack_11._size.y = (pOVar58->_size).y;
            OStack_11._size.z = (pOVar58->_size).z;
            OStack_11._center.x = (pOVar58->_center).x;
            OStack_11._center.y = (pOVar58->_center).y;
            OStack_11._center.z = (pOVar58->_center).z;
            OStack_11._rotation.x = (pOVar58->_rotation).x;
            OStack_11._rotation.y = (pOVar58->_rotation).y;
            OStack_11._rotation.z = (pOVar58->_rotation).z;
            OStack_11._rotation.w = (pOVar58->_rotation).w;
            OStack_11._isValid = pOVar58->_isValid;
            OStack_11._41_3_ = *(undefined3 *)&pOVar58->field_0x29;
            pLVar85 = OBB::OBB_GetCenterAndCornerPoints(&OStack_11,(MethodInfo *)0x0);
            pLStack_61 = pLVar85;
            if (pLStack_70 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            puVar66 = (undefined4 *)func_?();
            uStack_86 = 0;
            LStack_12._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)*puVar66;
            LStack_12._index = puVar66[1];
            LStack_12._version = puVar66[2];
            LStack_12._current.Quadrant = puVar66[3];
            LStack_12._current.FirstAxisSign = puVar66[4];
            LStack_12._current.SecondAxisSign = *(int32_t *)(puVar66 + 5);
            pLStack_87 = &LStack_12;
            while( true ) {
              uStack_1._0_1_ = 9;
              bVar44 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                       PlaneIdHelper+PlaneQuadrantInfo]::
                       List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                                 (&LStack_12,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                 );
              if (bVar44 == 0) break;
              uStack_88 = CONCAT44(LStack_12._current.FirstAxisSign,LStack_12._current.Quadrant);
              RStack_89.First = (undefined2)LStack_12._current.SecondAxisSign;
              RStack_89.Last = LStack_12._current.SecondAxisSign._2_2_;
              RStack_90.First = (undefined2)LStack_12._current.SecondAxisSign;
              RStack_90.Last = LStack_12._current.SecondAxisSign._2_2_;
              uStack_91 = uStack_88;
              if (pLVar85 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
              method_01 = (MethodInfo *)&UNK_?;
              puVar66 = (undefined4 *)func_?();
              uStack_92 = 0;
              auStack_13._0_4_ = *puVar66;
              auStack_13._4_4_ = puVar66[1];
              auStack_13._8_4_ = puVar66[2];
              auStack_13._12_4_ = puVar66[3];
              auStack_13._16_4_ = puVar66[4];
              auStack_13._20_4_ = puVar66[5];
              uStack_1._0_1_ = 0xb;
              pOStack_93 = (Object *)auStack_13;
              while( true ) {
                this_04 = (Predicate_1_Object_ *)auStack_13;
                bVar44 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                         PlaneIdHelper+PlaneQuadrantInfo]::
                         List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                                   ((List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                    this_04,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                   );
                if (bVar44 == 0) break;
                OStack_18._snapDistance = (float)auStack_13._12_4_;
                OStack_18._failReason = auStack_13._16_4_;
                RStack_94 = (RegexCharClass_SingleRange)
                             ((float)auStack_13._20_4_ - (float)RStack_89);
                pMStack_95 = (MethodInfo_1 *)auStack_13._20_4_;
                uStack_96 = CONCAT44((float)auStack_13._16_4_ - uStack_91._4_4_,
                                      (float)auStack_13._12_4_ - (float)uStack_91);
                LStack_41._current = RStack_94;
                fVar97 = (float10)func_?();
                pDStack_98 = (DelegateData *)(float)fVar97;
                pDStack_99 = pDStack_98;
                if ((float)pDStack_98 < (float)pUStack_14[2].klass) {
                  uStack_100 = CONCAT44(OStack_18._failReason,OStack_18._snapDistance);
                  pMStack_101 = pMStack_95;
                  if (pLStack_37 == (List_1_RTG_Object2ObjectSnap_SnapSortData_ *)0x0)
                  goto code_?;
                  method_00 = RStack_90;
                  func_?(pLStack_37,RStack_39,pPStack_75,RStack_71,RStack_78,uStack_82,
                                  fStack_83,(undefined4)uStack_88,uStack_88._4_4_,RStack_90,
                                  OStack_18._snapDistance,OStack_18._failReason,pMStack_95);
                  if ((char)uStack_82 != '\0') {
                    bVar34 = true;
                  }
                }
              }
              uStack_1._0_1_ = 9;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)auStack_13,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                         ,method_01);
              this_01 = pLStack_37;
            }
            uStack_1._0_1_ = 7;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)pLStack_87,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                       ,method_02);
          }
          uStack_1._0_1_ = 5;
          func_?();
        } while( true );
      }
      break;
    }
    uStack_1 = CONCAT31(uStack_1._1_3_,1);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pLStack_69,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
               ,(MethodInfo *)method_00);
  }
code_?:
  func_?();
  func_?();
  pcVar102 = (code *)swi(3);
  pOVar103 = (Object2ObjectSnap_SnapResult *)(*pcVar102)();
  return pOVar103;
code_?:
  while( true ) {
    pUVar104 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
              UIRenderDevice+AllocToUpdate]::
              List_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate__get_Item
                        ((UIRenderDevice_AllocToUpdate *)auStack_59,
                         (List_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_ *)
                         pLStack_36,0,
                         MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__get_Item_int_
                        );
    uStack_105 = pUVar104->id;
    uStack_106 = pUVar104->allocTime;
    pMStack_107 = pUVar104->meshHandle;
    uStack_108 = (pUVar104->permAllocVerts).start;
    uStack_109 = (pUVar104->permAllocIndices).size;
    pOStack_110 = (pUVar104->permAllocIndices).handle;
    uStack_111 = *(undefined4 *)&(pUVar104->permAllocIndices).shortLived;
    pPStack_112 = pUVar104->permPage;
    if ((char)(pUVar104->permAllocVerts).size != '\0') break;
    mscorlib.dll::System::Collections::Generic::List`1[RTG::Object2ObjectSnap+SnapSortData]::
    List_1_RTG_Object2ObjectSnap_SnapSortData__RemoveAt
              (this_01,0,
               MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__RemoveAt_int_
              );
  }
  if ((TypeInfo__RTG__Object2ObjectSnap____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_03 = TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_1;
  if (this_03 == (Comparison_1_RTG_Object2ObjectSnap_SnapSortData_ *)0x0) {
    if ((TypeInfo__RTG__Object2ObjectSnap____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar55 = TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9;
    this_03 = (Comparison_1_RTG_Object2ObjectSnap_SnapSortData_ *)func_?();
    mscorlib.dll::System::Comparison`1[UnityEngine::UIElements::UIR::UIRenderDevice+AllocToUpdate]::
    Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate___ctor
              ((Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_ *)this_03,
               (Object *)pOVar55,
               MethodInfo__RTG__Object2ObjectSnap____c___CalculateSnapResult_b__14_1_RTG__Object2ObjectSnap__SnapSortData__RTG__Object2ObjectSnap__SnapSortData_
               ,(MethodInfo *)0x0);
    TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_1 = this_03;
    ppCVar56 = &TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_1;
code_?:
    func_?(ppCVar56);
    this_01 = pLStack_37;
  }
code_?:
  mscorlib.dll::System::Collections::Generic::List`1[RTG::Object2ObjectSnap+SnapSortData]::
  List_1_RTG_Object2ObjectSnap_SnapSortData__Sort_1
            (this_01,this_03,
             MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__Sort_System__Comparison<RTG::Object2ObjectSnap::SnapSortData>_
            );
  puVar66 = (undefined4 *)func_?();
  uStack_105 = *puVar66;
  uStack_106 = puVar66[1];
  pMStack_107 = (MeshHandle *)puVar66[2];
  uStack_108 = puVar66[3];
  LStack_41._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)puVar66[4]
  ;
  LStack_41._index = puVar66[5];
  LStack_41._version = puVar66[6];
  LStack_41._current = *(RegexCharClass_SingleRange *)(puVar66 + 7);
  fStack_113 = (float)puVar66[8];
  uStack_114 = puVar66[9];
  uStack_115 = puVar66[10];
  fStack_63 = (float)puVar66[0xb];
  puVar66 = (undefined4 *)func_?(auStack_59,this_01,0);
  uStack_105 = *puVar66;
  uStack_106 = puVar66[1];
  pMStack_107 = (MeshHandle *)puVar66[2];
  uStack_108 = puVar66[3];
  uStack_116 = puVar66[4];
  uStack_117 = puVar66[5];
  uStack_118 = puVar66[6];
  uStack_119 = puVar66[7];
  uStack_109 = puVar66[8];
  pOStack_110 = (Object *)puVar66[9];
  uStack_111 = puVar66[10];
  pPStack_112 = (Page *)puVar66[0xb];
  uStack_24 = uStack_109;
  uStack_21 = pOStack_110;
  uStack_22 = uStack_111;
  fStack_23 = (float)pPStack_112;
  puVar120 = (uint32_t *)
            func_?(&stack0xfffffcf0,this_01,0,
                            MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__get_Item_int_
                           );
  auStack_59._0_4_ = *puVar120;
  auStack_59._4_4_ = puVar120[1];
  auStack_59._8_4_ = puVar120[2];
  uStack_121 = puVar120[3];
  uStack_122 = puVar120[4];
  pOStack_123 = (Object *)puVar120[5];
  uStack_124 = puVar120[6];
  uStack_125 = puVar120[7];
  uStack_126 = puVar120[8];
  pOStack_127 = (Object *)puVar120[9];
  uStack_128 = puVar120[10];
  pPStack_129 = (Page *)puVar120[0xb];
  fStack_130 = (float)puVar120[0xc];
  OStack_18._failReason = 0;
  OStack_18._success = 0;
  OStack_18._1_3_ = 0;
  OStack_18._snapPivot.x = 0.0;
  OStack_18._snapPivot.y = 0.0;
  OStack_18._snapPivot.z = 0.0;
  OStack_18._snapDestination.x = 0.0;
  OStack_18._snapDestination.y = 0.0;
  OStack_18._snapDestination.z = 0.0;
  OStack_18._snapDistance = 0.0;
  snapPivot.y = (float)LStack_41._current;
  snapPivot.x = (float)LStack_41._version;
  snapPivot.z = fStack_113;
  snapDestination.y = (float)uStack_111;
  snapDestination.x = (float)pOStack_110;
  snapDestination.z = fStack_23;
  Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor_1
            (&OStack_18,snapPivot,snapDestination,fStack_130,(MethodInfo *)0x0);
  goto code_?;
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
  puStack_4 = &stack0xffffff58;
  puVar5 = &stack0xffffff58;
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
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffff98,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)roots,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    value = &LStack_7;
    uStack_10 = 0;
    LStack_7._list = (List_1_System_Object_ *)pLVar9->_list;
    LStack_7._index = pLVar9->_index;
    LStack_7._version = pLVar9->_version;
    LStack_7._current = *(Object **)&pLVar9->_current;
    uStack_1 = 1;
    pLStack_11 = value;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_7,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      root = LStack_7._current;
      if (bVar12 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)value,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   ,in_stack_13);
        uStack_1 = 0xffffffff;
        if (OStack_6._success != 0) {
          pivot.y = OStack_6._snapPivot.y;
          pivot.x = OStack_6._snapPivot.x;
          pivot.z = OStack_6._snapPivot.z;
          dest.y = OStack_6._snapDestination.y;
          dest.x = OStack_6._snapDestination.x;
          dest.z = OStack_6._snapDestination.z;
          ObjectSnap::ObjectSnap_Snap_1(roots,pivot,dest,(MethodInfo *)0x0);
        }
        __return_storage_ptr__->_success = OStack_6._success;
        *(undefined3 *)&__return_storage_ptr__->field_0x1 = OStack_6._1_3_;
        (__return_storage_ptr__->_snapPivot).x = OStack_6._snapPivot.x;
        (__return_storage_ptr__->_snapPivot).y = OStack_6._snapPivot.y;
        (__return_storage_ptr__->_snapPivot).z = OStack_6._snapPivot.z;
        (__return_storage_ptr__->_snapDestination).x = OStack_6._snapDestination.x;
        (__return_storage_ptr__->_snapDestination).y = OStack_6._snapDestination.y;
        (__return_storage_ptr__->_snapDestination).z = OStack_6._snapDestination.z;
        __return_storage_ptr__->_snapDistance = OStack_6._snapDistance;
        __return_storage_ptr__->_failReason = OStack_6._failReason;
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar14 = Object2ObjectSnap_CalculateSnapResult
                          ((Object2ObjectSnap_SnapResult *)&stack0xffffff64,(GameObject *)root,
                           snapConfig,(MethodInfo *)0x0);
      uVar15._0_1_ = pOVar14->_success;
      uVar15._1_3_ = *(undefined3 *)&pOVar14->field_0x1;
      fVar16 = pOVar14->_snapDistance;
      if (pOVar14->_failReason == 1) break;
      if ((pOVar14->_failReason == 0) && (fVar16 < fStack_8)) {
        OStack_6._failReason = 0;
        OStack_6._0_4_ = uVar15;
        OStack_6._snapPivot.x = (pOVar14->_snapPivot).x;
        OStack_6._snapPivot.y = (pOVar14->_snapPivot).y;
        OStack_6._snapPivot.z = (pOVar14->_snapPivot).z;
        OStack_6._snapDestination.x = (pOVar14->_snapDestination).x;
        OStack_6._snapDestination.y = (pOVar14->_snapDestination).y;
        OStack_6._snapDestination.z = (pOVar14->_snapDestination).z;
        OStack_6._snapDistance = fVar16;
        fStack_8 = fVar16;
      }
    }
    bVar12 = pOVar14->_success;
    uVar17 = *(undefined3 *)&pOVar14->field_0x1;
    uStack_1 = 0xffffffff;
    method_00 = (MethodInfo *)(pOVar14->_snapDestination).x;
    fVar16 = (pOVar14->_snapDestination).y;
    fVar18 = (pOVar14->_snapDestination).z;
    fVar19 = pOVar14->_snapDistance;
    pMVar20 = 
    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,method_00);
    __return_storage_ptr__->_success = bVar12;
    *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar17;
    (__return_storage_ptr__->_snapPivot).x = (float)&UNK_?;
    (__return_storage_ptr__->_snapPivot).y = (float)value;
    (__return_storage_ptr__->_snapPivot).z = (float)pMVar20;
    (__return_storage_ptr__->_snapDestination).x = (float)method_00;
    (__return_storage_ptr__->_snapDestination).y = fVar16;
    (__return_storage_ptr__->_snapDestination).z = fVar18;
    __return_storage_ptr__->_snapDistance = fVar19;
    __return_storage_ptr__->_failReason = 1;
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  pOVar14 = (Object2ObjectSnap_SnapResult *)(*pcVar21)();
  return pOVar14;
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
                     ((Object2ObjectSnap_SnapResult *)&stack0xffffffd8,root,snapConfig,
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
  if (__return_storage_ptr__->_success != 0) {
    ObjectSnap::ObjectSnap_Snap
              (root,__return_storage_ptr__->_snapPivot,__return_storage_ptr__->_snapDestination,
               (MethodInfo *)0x0);
  }
  return __return_storage_ptr__;
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
  Object2ObjectSnap+Config::Object2ObjectSnap_Config_set_AreaMatchEps
            (&TypeInfo__RTG__Object2ObjectSnap->static_fields->_defaultConfig,1e-05,
             (MethodInfo *)0x0);
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

