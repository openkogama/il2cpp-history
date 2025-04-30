
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
  LStack_6._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.First = 0;
  LStack_6._current.Last = 0;
  func_?(&OStack_7,0,0x2c);
  OStack_8.klass = (Object__Class *)0x0;
  OStack_8.monitor = (MonitorData *)0x0;
  uStack_9 = 0;
  pGStack_10 = (GameObject *)0x0;
  LStack_11._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_11._index = 0;
  LStack_11._version = 0;
  LStack_11._current.First = 0;
  LStack_11._current.Last = 0;
  func_?(&OStack_12,0,0x2c);
  LStack_13._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  LStack_13._index = 0;
  LStack_13._version = 0;
  LStack_13._current.Quadrant = 0;
  LStack_13._current.FirstAxisSign = 0;
  LStack_13._current.SecondAxisSign._0_2_ = 0;
  LStack_13._current.SecondAxisSign._2_2_ = 0;
  LStack_14._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  LStack_14._index = 0;
  LStack_14._version = 0;
  LStack_14._current.Quadrant = 0;
  LStack_14._current.FirstAxisSign = 0;
  LStack_14._current.SecondAxisSign = 0;
  this = (UxmlObjectListAttributeDescription_1_System_Object_ *)
         func_?(TypeInfo__RTG__Object2ObjectSnap____c__DisplayClass14_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this,(MethodInfo *)0x0);
  pUStack_15 = this;
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
  pUVar16 = &this->fields;
  pLVar17 = (pUVar16->_)._defaultValue_k__BackingField;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  RStack_18 = (RegexCharClass_SingleRange)
              GameObjectEx::GameObjectEx_GetAllChildrenAndSelf
                        ((GameObject *)pLVar17,(MethodInfo *)0x0);
  if (RStack_18 == (RegexCharClass_SingleRange)0x0) goto code_?;
  pcVar19 = *(char **)((int)RStack_18 + 0xc);
  if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
    root = (GameObject *)TypeInfo__RTG__Object2ObjectSnap;
    func_?();
  }
  if (100 < (int)pcVar19) {
    failReson = Object2ObjectSnap_SnapFailReson__Enum_MaxObjectsExceeded;
code_?:
    OStack_20._failReason = 0;
    OStack_20._snapDestination.x = 0.0;
    OStack_20._snapDestination.y = 0.0;
    OStack_20._snapDestination.z = 0.0;
    OStack_20._snapDistance = 0.0;
    OStack_20._success = 0;
    OStack_20._1_3_ = 0;
    OStack_20._snapPivot.x = 0.0;
    OStack_20._snapPivot.y = 0.0;
    OStack_20._snapPivot.z = 0.0;
    Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor
              (&OStack_20,failReson,(MethodInfo *)root);
code_?:
    __return_storage_ptr__->_success = OStack_20._success;
    *(undefined3 *)&__return_storage_ptr__->field_0x1 = OStack_20._1_3_;
    (__return_storage_ptr__->_snapPivot).x = OStack_20._snapPivot.x;
    (__return_storage_ptr__->_snapPivot).y = OStack_20._snapPivot.y;
    (__return_storage_ptr__->_snapPivot).z = OStack_20._snapPivot.z;
code_?:
    (__return_storage_ptr__->_snapDestination).x = OStack_20._snapDestination.x;
    (__return_storage_ptr__->_snapDestination).y = OStack_20._snapDestination.y;
    (__return_storage_ptr__->_snapDestination).z = OStack_20._snapDestination.z;
    __return_storage_ptr__->_snapDistance = OStack_20._snapDistance;
    __return_storage_ptr__->_failReason = OStack_20._failReason;
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
  pLVar17 = (pUVar16->_)._defaultValue_k__BackingField;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  pLVar21 = GameObjectEx::GameObjectEx_GetMeshObjectsInHierarchy
                      ((GameObject *)pLVar17,(MethodInfo *)0x0);
  pLVar22 = GameObjectEx::GameObjectEx_GetSpriteObjectsInHierarchy
                      ((GameObject *)(pUVar16->_)._defaultValue_k__BackingField,(MethodInfo *)0x0);
  if (pLVar21 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
  if ((pLVar21->fields)._size == 0) {
    if (pLVar22 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
    if ((pLVar22->fields)._size == 0) {
      root = (GameObject *)0x0;
      failReson = Object2ObjectSnap_SnapFailReson__Enum_InvalidSourceObjects;
      goto code_?;
    }
  }
  uStack_23 = 0;
  uStack_24 = 0;
  fStack_25 = 0.0;
  uStack_26 = 5;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar28 = (pVVar27->oneVector).x;
  uVar29 = (pVVar27->oneVector).y;
  OStack_20._failReason = (int32_t)(pVVar27->oneVector).z;
  pUVar30 = this[2].klass;
  RStack_31 = (RegexCharClass_SingleRange)
              ((float)OStack_20._failReason * (float)pUVar30 +
              (float)OStack_20._failReason * (float)pUVar30);
  uStack_32 = CONCAT44((float)uVar29 * (float)pUVar30 + (float)uVar29 * (float)pUVar30,
                       (float)uVar28 * (float)pUVar30 + (float)uVar28 * (float)pUVar30);
  RStack_33 = RStack_31;
  OStack_20._snapDestination.z = (float)uVar28;
  OStack_20._snapDistance = (float)uVar29;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pPStack_34 = (Predicate_1_Object_ *)BoxMath::BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  uStack_35 = (uint)this[2].monitor & 1;
  bVar36 = false;
  uStack_37 = uStack_35;
  this_01 = (List_1_RTG_Object2ObjectSnap_SnapSortData_ *)func_?();
  pLStack_38 = this_01;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)this_01,10,
             MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__List_int_
            );
  this_04 = (Predicate_1_Object_ *)0x34;
  pLStack_39 = this_01;
  pLStack_40 = this_01;
  func_?(&RStack_41,0);
  pLVar42 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                      (&LStack_43,
                       (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       RStack_18,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                      );
  uStack_44 = 0;
  LStack_45._list = (List_1_System_Object_ *)pLVar42->_list;
  LStack_45._index = pLVar42->_index;
  LStack_45._version = pLVar42->_version;
  LStack_45._current = *(Object **)&pLVar42->_current;
  pLStack_46 = &LStack_45;
  uStack_1 = 0;
  while( true ) {
    uStack_1._0_1_ = 1;
    do {
      do {
        bVar47 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           (&LStack_45,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                           );
        gameObject = LStack_45._current;
        if (bVar47 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)pLStack_46,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                     ,(MethodInfo *)this_04);
          uStack_1._0_1_ = 0xff;
          uStack_1._1_3_ = 0xffffff;
          if (this_01 == (List_1_RTG_Object2ObjectSnap_SnapSortData_ *)0x0) goto code_?;
          if ((this_01->fields)._size == 0) {
            iStack_48 = 0;
            fStack_49 = 0.0;
            fStack_50 = 0.0;
            fStack_51 = 0.0;
            fStack_52 = 0.0;
            fStack_53 = 0.0;
            fStack_54 = 0.0;
            fStack_55 = 0.0;
            fStack_56 = 0.0;
            Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor
                      ((Object2ObjectSnap_SnapResult *)&fStack_49,
                       Object2ObjectSnap_SnapFailReson__Enum_NoDestinationFound,(MethodInfo *)0x0);
            *(float *)__return_storage_ptr__ = fStack_49;
            (__return_storage_ptr__->_snapPivot).x = fStack_50;
            (__return_storage_ptr__->_snapPivot).y = fStack_51;
            (__return_storage_ptr__->_snapPivot).z = fStack_52;
            OStack_20._failReason = iStack_48;
            OStack_20._snapDestination.x = fStack_53;
            OStack_20._snapDestination.y = fStack_54;
            OStack_20._snapDestination.z = fStack_55;
            OStack_20._snapDistance = fStack_56;
            goto code_?;
          }
          if ((uStack_35 != 0) && (bVar36)) goto code_?;
          if ((TypeInfo__RTG__Object2ObjectSnap____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this_03 = TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_0;
          if (this_03 != (Comparison_1_RTG_Object2ObjectSnap_SnapSortData_ *)0x0)
          goto code_?;
          if ((TypeInfo__RTG__Object2ObjectSnap____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar57 = TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9;
          this_03 = (Comparison_1_RTG_Object2ObjectSnap_SnapSortData_ *)func_?();
          mscorlib.dll::System::Comparison`1[UnityEngine::UIElements::UIR::
          UIRenderDevice+AllocToUpdate]::
          Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate___ctor
                    ((Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_ *)
                     this_03,(Object *)pOVar57,
                     MethodInfo__RTG__Object2ObjectSnap____c___CalculateSnapResult_b__14_0_RTG__Object2ObjectSnap__SnapSortData__RTG__Object2ObjectSnap__SnapSortData_
                     ,(MethodInfo *)0x0);
          TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_0 = this_03;
          ppCVar58 = &TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_0;
          goto code_?;
        }
        RStack_59 = (RegexCharClass_SingleRange)LStack_45._current;
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__ObjectBounds);
        }
        queryConfig.NoVolumeSize.x = (float)uStack_23;
        queryConfig.ObjectTypes = uStack_26;
        queryConfig.NoVolumeSize.y = (float)uStack_24;
        queryConfig.NoVolumeSize.z = fStack_25;
        pOVar60 = ObjectBounds::ObjectBounds_CalcWorldOBB
                            ((OBB *)(auStack_61 + 8),(GameObject *)gameObject,queryConfig,
                             (MethodInfo *)0x0);
        fStack_50 = (pOVar60->_center).x;
        OStack_20._snapDestination.y = (pOVar60->_center).y;
        OStack_20._snapDestination.z = (pOVar60->_center).z;
        OStack_20._snapDistance = (pOVar60->_rotation).x;
        OStack_20._failReason = (int32_t)(pOVar60->_rotation).y;
        uStack_62._0_4_ = (pOVar60->_rotation).z;
        uStack_62._4_4_ = (pOVar60->_rotation).w;
        RStack_18 = *(RegexCharClass_SingleRange *)&pOVar60->_isValid;
        fStack_49 = (pOVar60->_size).z + (float)RStack_33;
        uStack_63 = CONCAT44((pOVar60->_size).y + uStack_32._4_4_,
                              (pOVar60->_size).x + (float)uStack_32);
        fStack_64 = fStack_49;
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
        obb._size.z = fStack_49;
        obb._size.x = (float)(undefined4)uStack_63;
        obb._size.y = (float)uStack_63._4_4_;
        obb._center.x = fStack_50;
        obb._center.y = OStack_20._snapDestination.y;
        obb._center.z = OStack_20._snapDestination.z;
        obb._rotation.x = OStack_20._snapDistance;
        obb._rotation.y = (float)OStack_20._failReason;
        obb._rotation.z = (float)(int)uStack_62;
        obb._rotation.w = (float)(int)((ulonglong)uStack_62 >> 0x20);
        obb._40_4_ = RStack_18;
        RTScene::RTScene_OverlapBox
                  (this_02,obb,TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer,
                   (MethodInfo *)0x0);
        RStack_65 = (RegexCharClass_SingleRange)
                    TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer;
        RStack_18 = (RegexCharClass_SingleRange)&pUStack_15[2].fields;
        this_04 = (Predicate_1_Object_ *)
                  (((UxmlObjectListAttributeDescription_1_System_Object___Fields *)RStack_18)->_).
                  _defaultValue_k__BackingField;
        if (this_04 == (Predicate_1_Object_ *)0x0) {
          this_04 = (Predicate_1_Object_ *)func_?();
          mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                    (this_04,(Object *)pUStack_15,
                     MethodInfo__RTG__Object2ObjectSnap____c__DisplayClass14_0___CalculateSnapResult_b__2_UnityEngine__GameObject_
                     ,(MethodInfo *)0x0);
          RStack_66 = RStack_18;
          *(Predicate_1_Object_ **)RStack_18 = this_04;
          pPStack_67 = this_04;
          func_?();
        }
        if (RStack_65 == (RegexCharClass_SingleRange)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAll
                  ((List_1_System_Object_ *)RStack_65,this_04,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                  );
        if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pLVar21 = TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer;
        if (pLVar21 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      } while ((pLVar21->fields)._size == 0);
      if ((TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>->_1).cctor_finished_or_no_cctor ==
          0) {
        this_04 = (Predicate_1_Object_ *)&UNK_?;
        func_?();
      }
      pOVar68 = (Object2ObjectSnapDataDb *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>__get_Get__);
      RVar69 = RStack_59;
      if (pOVar68 == (Object2ObjectSnapDataDb *)0x0) goto code_?;
      RStack_59 = (RegexCharClass_SingleRange)
                  Object2ObjectSnapDataDb::Object2ObjectSnapDataDb_GetObject2ObjectSnapData
                            (pOVar68,(GameObject *)RStack_59,(MethodInfo *)0x0);
    } while (RStack_59 == (RegexCharClass_SingleRange)0x0);
    method_03 = (RegexCharClass_SingleRange)&RStack_41;
    RStack_41 = RVar69;
    func_?(method_03,RVar69);
    if (pPStack_34 == (Predicate_1_Object_ *)0x0) break;
    this_04 = pPStack_34;
    puVar70 = (undefined4 *)func_?(auStack_71);
    uStack_72 = 0;
    LStack_6._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*puVar70
    ;
    LStack_6._index = puVar70[1];
    LStack_6._version = puVar70[2];
    LStack_6._current = *(RegexCharClass_SingleRange *)(puVar70 + 3);
    pLStack_73 = &LStack_6;
code_?:
    uStack_1._0_1_ = 3;
    bVar47 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
             RegularExpressions::RegexCharClass+SingleRange]::
             List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                       (&LStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                       );
    RVar69 = LStack_6._current;
    if (bVar47 != 0) {
      RStack_65 = RStack_59;
      method_02 = (MethodInfo *)&UNK_?;
      BStack_74 = Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaDesc
                            ((Object2ObjectSnapData *)RStack_59,(BoxFace__Enum)LStack_6._current,
                             (MethodInfo *)0x0);
      method_03 = RStack_65;
      pOVar60 = Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaBounds
                          ((OBB *)(auStack_61 + 8),(Object2ObjectSnapData *)RStack_65,
                           (BoxFace__Enum)RVar69,(MethodInfo *)0x0);
      OStack_7._size.x = (pOVar60->_size).x;
      OStack_7._size.y = (pOVar60->_size).y;
      OStack_7._size.z = (pOVar60->_size).z;
      OStack_7._center.x = (pOVar60->_center).x;
      OStack_7._center.y = (pOVar60->_center).y;
      OStack_7._center.z = (pOVar60->_center).z;
      OStack_7._rotation.x = (pOVar60->_rotation).x;
      OStack_7._rotation.y = (pOVar60->_rotation).y;
      OStack_7._rotation.z = (pOVar60->_rotation).z;
      OStack_7._rotation.w = (pOVar60->_rotation).w;
      OStack_7._isValid = pOVar60->_isValid;
      OStack_7._41_3_ = *(undefined3 *)&pOVar60->field_0x29;
      RStack_65 = (RegexCharClass_SingleRange)
                  OBB::OBB_GetCenterAndCornerPoints(&OStack_7,(MethodInfo *)0x0);
      RStack_75 = RVar69;
      if ((TypeInfo__RTG__Object2ObjectSnap->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_04 = (Predicate_1_Object_ *)
                TypeInfo__RTG__Object2ObjectSnap->static_fields->_nearbyObjectBuffer;
      if (this_04 != (Predicate_1_Object_ *)0x0) {
        puVar70 = (undefined4 *)func_?(auStack_76);
        uStack_77 = 0;
        OStack_8.klass = (Object__Class *)*puVar70;
        OStack_8.monitor = (MonitorData *)puVar70[1];
        uStack_9 = puVar70[2];
        pGStack_10 = (GameObject *)puVar70[3];
        pOStack_78 = &OStack_8;
        do {
          uStack_1._0_1_ = 5;
          do {
            RVar69 = (RegexCharClass_SingleRange)&OStack_8;
            bVar47 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               ((List_1_T_Enumerator_System_Object_ *)RVar69,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                               );
            gameObject_00 = pGStack_10;
            if (bVar47 == 0) {
              uStack_1._0_1_ = 3;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        (pOStack_78,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                         ,method_02);
              goto code_?;
            }
            if ((TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>);
            }
            pOVar68 = (Object2ObjectSnapDataDb *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::Object2ObjectSnapDataDb>__get_Get__
                                );
            if (pOVar68 == (Object2ObjectSnapDataDb *)0x0) goto code_?;
            method_02 = (MethodInfo *)0x0;
            RStack_18 = (RegexCharClass_SingleRange)
                        Object2ObjectSnapDataDb::Object2ObjectSnapDataDb_GetObject2ObjectSnapData
                                  (pOVar68,gameObject_00,(MethodInfo *)0x0);
          } while (RStack_18 == (RegexCharClass_SingleRange)0x0);
          pGStack_79 = gameObject_00;
          func_?(&pGStack_79,gameObject_00);
          method_02 = (MethodInfo *)&UNK_?;
          puVar70 = (undefined4 *)
                    func_?(auStack_80,pPStack_34,
                                    MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__GetEnumerator__
                                   );
          uStack_81 = 0;
          LStack_11._list =
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*puVar70;
          LStack_11._index = puVar70[1];
          LStack_11._version = puVar70[2];
          LStack_11._current = *(RegexCharClass_SingleRange *)(puVar70 + 3);
          pLStack_82 = &LStack_11;
          while( true ) {
            uStack_1._0_1_ = 7;
            bVar47 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                               (&LStack_11,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                               );
            boxFace = LStack_11._current;
            if (bVar47 == 0) break;
            RStack_83 = LStack_11._current;
            method_01 = (MethodInfo *)&UNK_?;
            BVar84 = Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaDesc
                               ((Object2ObjectSnapData *)RStack_18,
                                (BoxFace__Enum)LStack_11._current,(MethodInfo *)0x0);
            fStack_85 = BVar84.Area;
            uVar86 = (uint)pMStack_87 >> 8;
            pMStack_87 = (MethodInfo *)((uint)pMStack_87 & 0xffffff00);
            if ((uStack_37 != 0) && (BVar84.AreaType == BStack_74.AreaType)) {
              fStack_88 = (float)((uint)(fStack_85 - BStack_74.Area) & _UNK_?);
              pMStack_87 = (MethodInfo *)CONCAT31((int3)uVar86,fStack_88 <= _UNK_?);
            }
            RVar69 = RStack_18;
            pOVar60 = Object2ObjectSnapData::Object2ObjectSnapData_GetWorldSnapAreaBounds
                                ((OBB *)(auStack_61 + 8),(Object2ObjectSnapData *)RStack_18,
                                 (BoxFace__Enum)boxFace,(MethodInfo *)0x0);
            OStack_12._size.x = (pOVar60->_size).x;
            OStack_12._size.y = (pOVar60->_size).y;
            OStack_12._size.z = (pOVar60->_size).z;
            OStack_12._center.x = (pOVar60->_center).x;
            OStack_12._center.y = (pOVar60->_center).y;
            OStack_12._center.z = (pOVar60->_center).z;
            OStack_12._rotation.x = (pOVar60->_rotation).x;
            OStack_12._rotation.y = (pOVar60->_rotation).y;
            OStack_12._rotation.z = (pOVar60->_rotation).z;
            OStack_12._rotation.w = (pOVar60->_rotation).w;
            OStack_12._isValid = pOVar60->_isValid;
            OStack_12._41_3_ = *(undefined3 *)&pOVar60->field_0x29;
            method_02 = (MethodInfo *)&UNK_?;
            pLVar89 = OBB::OBB_GetCenterAndCornerPoints(&OStack_12,(MethodInfo *)0x0);
            uStack_62 = CONCAT44(pLVar89,(undefined4)uStack_62);
            if (RStack_65 == (RegexCharClass_SingleRange)0x0) goto code_?;
            method_03 = (RegexCharClass_SingleRange)
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
            ;
            puVar70 = (undefined4 *)func_?(&OStack_20._snapPivot.z,RStack_65);
            uStack_90 = 0;
            LStack_13._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)*puVar70;
            LStack_13._index = puVar70[1];
            LStack_13._version = puVar70[2];
            LStack_13._current.Quadrant = puVar70[3];
            LStack_13._current.FirstAxisSign = puVar70[4];
            LStack_13._current.SecondAxisSign = *(int32_t *)(puVar70 + 5);
            pLStack_91 = &LStack_13;
            while( true ) {
              uStack_1._0_1_ = 9;
              bVar47 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                       PlaneIdHelper+PlaneQuadrantInfo]::
                       List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                                 (&LStack_13,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                 );
              if (bVar47 == 0) break;
              uStack_92 = CONCAT44(LStack_13._current.FirstAxisSign,LStack_13._current.Quadrant);
              RStack_93.First = (undefined2)LStack_13._current.SecondAxisSign;
              RStack_93.Last = LStack_13._current.SecondAxisSign._2_2_;
              RStack_94.First = (undefined2)LStack_13._current.SecondAxisSign;
              RStack_94.Last = LStack_13._current.SecondAxisSign._2_2_;
              uStack_95 = uStack_92;
              if (pLVar89 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
              method_00 = (MethodInfo *)&UNK_?;
              puVar70 = (undefined4 *)
                        func_?(&OStack_20._snapPivot.z,pLVar89,
                                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                                       );
              uStack_96 = 0;
              LStack_14._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)*puVar70;
              LStack_14._index = puVar70[1];
              LStack_14._version = puVar70[2];
              LStack_14._current.Quadrant = puVar70[3];
              LStack_14._current.FirstAxisSign = puVar70[4];
              LStack_14._current.SecondAxisSign = puVar70[5];
              uStack_1._0_1_ = 0xb;
              pLStack_97 = &LStack_14;
              while (bVar47 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                              PlaneIdHelper+PlaneQuadrantInfo]::
                              List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                                        (&LStack_14,
                                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                        ), bVar47 != 0) {
                OStack_20._snapDistance = (float)LStack_14._current.Quadrant;
                OStack_20._failReason = LStack_14._current.FirstAxisSign;
                LStack_43._current =
                     (RegexCharClass_SingleRange)
                     ((float)LStack_14._current.SecondAxisSign - (float)RStack_93);
                fStack_98 = (float)LStack_14._current.SecondAxisSign;
                uStack_99 = CONCAT44((float)LStack_14._current.FirstAxisSign - uStack_95._4_4_,
                                     (float)LStack_14._current.Quadrant - (float)uStack_95);
                RStack_31 = LStack_43._current;
                fVar100 = (float10)func_?(&uStack_99,0);
                pPVar101 = (Predicate_1_Object_ *)(float)fVar100;
                pPStack_102 = pPVar101;
                pPStack_103 = pPVar101;
                if ((float)pPVar101 < (float)pUStack_15[2].klass) {
                  uStack_104 = CONCAT44(OStack_20._failReason,OStack_20._snapDistance);
                  fStack_105 = fStack_98;
                  if (pLStack_38 == (List_1_RTG_Object2ObjectSnap_SnapSortData_ *)0x0)
                  goto code_?;
                  RVar69 = RStack_41;
                  method_02 = pMStack_87;
                  method_03 = RStack_94;
                  func_?(pLStack_38,RStack_41,pGStack_79,RStack_75,RStack_83,
                                  pMStack_87,fStack_88,(undefined4)uStack_92,uStack_92._4_4_,
                                  RStack_94,OStack_20._snapDistance,OStack_20._failReason,fStack_98)
                  ;
                  this_04 = pPVar101;
                  if ((char)pMStack_87 != '\0') {
                    bVar36 = true;
                  }
                }
              }
              uStack_1._0_1_ = 9;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&LStack_14,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                         ,method_00);
              this_01 = pLStack_38;
            }
            uStack_1._0_1_ = 7;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)pLStack_91,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                       ,method_01);
          }
          uStack_1._0_1_ = 5;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)pLStack_82,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
                     ,(MethodInfo *)RVar69);
        } while( true );
      }
      break;
    }
    uStack_1 = CONCAT31(uStack_1._1_3_,1);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pLStack_73,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
               ,(MethodInfo *)method_03);
  }
code_?:
  func_?();
  func_?();
  pcVar106 = (code *)swi(3);
  pOVar107 = (Object2ObjectSnap_SnapResult *)(*pcVar106)();
  return pOVar107;
code_?:
  while( true ) {
    pUVar108 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
              UIRenderDevice+AllocToUpdate]::
              List_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate__get_Item
                        ((UIRenderDevice_AllocToUpdate *)auStack_61,
                         (List_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_ *)
                         pLStack_39,0,
                         MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__get_Item_int_
                        );
    uStack_109 = pUVar108->id;
    uStack_110 = pUVar108->allocTime;
    pMStack_111 = pUVar108->meshHandle;
    uStack_112 = (pUVar108->permAllocVerts).start;
    uStack_113 = (pUVar108->permAllocIndices).size;
    pOStack_114 = (pUVar108->permAllocIndices).handle;
    uStack_115 = *(undefined4 *)&(pUVar108->permAllocIndices).shortLived;
    pPStack_116 = pUVar108->permPage;
    if ((char)(pUVar108->permAllocVerts).size != '\0') break;
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
    pOVar57 = TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9;
    this_03 = (Comparison_1_RTG_Object2ObjectSnap_SnapSortData_ *)func_?();
    mscorlib.dll::System::Comparison`1[UnityEngine::UIElements::UIR::UIRenderDevice+AllocToUpdate]::
    Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate___ctor
              ((Comparison_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_ *)this_03,
               (Object *)pOVar57,
               MethodInfo__RTG__Object2ObjectSnap____c___CalculateSnapResult_b__14_1_RTG__Object2ObjectSnap__SnapSortData__RTG__Object2ObjectSnap__SnapSortData_
               ,(MethodInfo *)0x0);
    TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_1 = this_03;
    ppCVar58 = &TypeInfo__RTG__Object2ObjectSnap____c->static_fields->__9__14_1;
code_?:
    func_?(ppCVar58);
    this_01 = pLStack_38;
  }
code_?:
  mscorlib.dll::System::Collections::Generic::List`1[RTG::Object2ObjectSnap+SnapSortData]::
  List_1_RTG_Object2ObjectSnap_SnapSortData__Sort_1
            (this_01,this_03,
             MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__Sort_System__Comparison<RTG::Object2ObjectSnap::SnapSortData>_
            );
  puVar70 = (undefined4 *)func_?();
  uStack_109 = *puVar70;
  uStack_110 = puVar70[1];
  pMStack_111 = (MeshHandle *)puVar70[2];
  uStack_112 = puVar70[3];
  LStack_43._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)puVar70[4]
  ;
  LStack_43._index = puVar70[5];
  LStack_43._version = puVar70[6];
  LStack_43._current = *(RegexCharClass_SingleRange *)(puVar70 + 7);
  fStack_117 = (float)puVar70[8];
  uStack_118 = puVar70[9];
  uStack_119 = puVar70[10];
  fStack_64 = (float)puVar70[0xb];
  puVar70 = (undefined4 *)func_?(auStack_61,this_01,0);
  uStack_109 = *puVar70;
  uStack_110 = puVar70[1];
  pMStack_111 = (MeshHandle *)puVar70[2];
  uStack_112 = puVar70[3];
  uStack_120 = puVar70[4];
  uStack_121 = puVar70[5];
  uStack_122 = puVar70[6];
  uStack_123 = puVar70[7];
  uStack_113 = puVar70[8];
  pOStack_114 = (Object *)puVar70[9];
  uStack_115 = puVar70[10];
  pPStack_116 = (Page *)puVar70[0xb];
  uStack_26 = uStack_113;
  uStack_23 = pOStack_114;
  uStack_24 = uStack_115;
  fStack_25 = (float)pPStack_116;
  puVar124 = (uint32_t *)
            func_?(&stack0xfffffcf0,this_01,0,
                            MethodInfo__System__Collections__Generic__List<RTG::Object2ObjectSnap::SnapSortData>__get_Item_int_
                           );
  auStack_61._0_4_ = *puVar124;
  auStack_61._4_4_ = puVar124[1];
  auStack_61._8_4_ = puVar124[2];
  uStack_125 = puVar124[3];
  uStack_126 = puVar124[4];
  pOStack_127 = (Object *)puVar124[5];
  uStack_128 = puVar124[6];
  uStack_129 = puVar124[7];
  uStack_130 = puVar124[8];
  pOStack_131 = (Object *)puVar124[9];
  uStack_132 = puVar124[10];
  pPStack_133 = (Page *)puVar124[0xb];
  fStack_134 = (float)puVar124[0xc];
  OStack_20._failReason = 0;
  OStack_20._success = 0;
  OStack_20._1_3_ = 0;
  OStack_20._snapPivot.x = 0.0;
  OStack_20._snapPivot.y = 0.0;
  OStack_20._snapPivot.z = 0.0;
  OStack_20._snapDestination.x = 0.0;
  OStack_20._snapDestination.y = 0.0;
  OStack_20._snapDestination.z = 0.0;
  OStack_20._snapDistance = 0.0;
  snapPivot.y = (float)LStack_43._current;
  snapPivot.x = (float)LStack_43._version;
  snapPivot.z = fStack_117;
  snapDestination.y = (float)uStack_115;
  snapDestination.x = (float)pOStack_114;
  snapDestination.z = fStack_25;
  Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor_1
            (&OStack_20,snapPivot,snapDestination,fStack_134,(MethodInfo *)0x0);
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
  fStack_7 = _UNK_?;
  Object2ObjectSnap+SnapResult::Object2ObjectSnap_SnapResult__ctor
            (&OStack_6,Object2ObjectSnap_SnapFailReson__Enum_NoDestinationFound,(MethodInfo *)0x0);
  if (roots != (List_1_UnityEngine_GameObject_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffff98,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)roots,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    value = &LStack_9;
    uStack_10 = 0;
    LStack_9._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_9._index = pLVar8->_index;
    LStack_9._version = pLVar8->_version;
    LStack_9._current = *(Object **)&pLVar8->_current;
    uStack_1 = 1;
    pLStack_11 = value;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      root = LStack_9._current;
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
      if ((pOVar14->_failReason == 0) && (fVar16 < fStack_7)) {
        OStack_6._failReason = 0;
        OStack_6._0_4_ = uVar15;
        OStack_6._snapPivot.x = (pOVar14->_snapPivot).x;
        OStack_6._snapPivot.y = (pOVar14->_snapPivot).y;
        OStack_6._snapPivot.z = (pOVar14->_snapPivot).z;
        OStack_6._snapDestination.x = (pOVar14->_snapDestination).x;
        OStack_6._snapDestination.y = (pOVar14->_snapDestination).y;
        OStack_6._snapDestination.z = (pOVar14->_snapDestination).z;
        OStack_6._snapDistance = fVar16;
        fStack_7 = fVar16;
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

