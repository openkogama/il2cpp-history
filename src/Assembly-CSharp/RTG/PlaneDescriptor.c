
/* PlaneDescriptor(PlaneId, PlaneQuadrantId) */

void Assembly-CSharp.dll::RTG::PlaneDescriptor::PlaneDescriptor__ctor
               (PlaneDescriptor *this,PlaneId__Enum planeId,PlaneQuadrantId__Enum planeQuadrant,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__PlaneIdHelper);
    cRam_? = '\x01';
  }
  this->_id = planeId;
  this->_quadrant = planeQuadrant;
  if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__PlaneIdHelper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__AxisDescriptor);
    func_?(&TypeInfo__RTG__PlaneIdHelper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__PlaneIdHelper);
  }
  iVar1 = 0;
  if (planeId != PlaneId__Enum_XY) {
    iVar1 = (planeId == PlaneId__Enum_ZX) + 1;
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                   );
    func_?(&TypeInfo__RTG__PlaneIdHelper);
    func_?(&TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
    func_?(&
                    MethodInfo__RTG__PlaneIdHelper____c__DisplayClass9_0___GetFirstAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                   );
    func_?(&TypeInfo__RTG__PlaneIdHelper____c__DisplayClass9_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__PlaneIdHelper____c__DisplayClass9_0;
  pOVar2 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pOVar2 != (Object *)0x0) {
    pOVar2[1].klass = (Object__Class *)planeQuadrant;
    if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__PlaneIdHelper);
    }
    pLVar3 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
    if (pLVar3 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
      XVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
               XmlSchemaObjectTable+XmlSchemaObjectEntry]::
               List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                         ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                          pLVar3,planeId,
                          MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                         );
      uStack_5 = CONCAT44(XVar4.qname,(undefined *)uStack_5);
      pPStack_6 = (Predicate_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                  func_?(TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>
                                 );
      mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
      Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                ((Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pPStack_6,pOVar2,
                 MethodInfo__RTG__PlaneIdHelper____c__DisplayClass9_0___GetFirstAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 ,(MethodInfo *)0x0);
      if ((XVar4.xso != (XmlSchemaObject *)0x0) &&
         (pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[RTG::
                   PlaneIdHelper+PlaneQuadrantInfo]::
                   List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__FindAll
                             ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)XVar4.xso,pPStack_6,
                              MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                             ), pLVar7 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0)) {
        pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           (&VStack_9,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pLVar7,0,
                            MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                           );
        uStack_5._0_4_ = (undefined *)pVVar8->alias;
        uStack_5._4_4_ = (AxisDescriptor__Class **)pVVar8->path;
        pAVar10 = TypeInfo__RTG__AxisDescriptor;
        pAVar11 = (AxisDescriptor *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pAVar11,ExceptionArgument__Enum_obj,(MethodInfo *)pAVar10);
        (pAVar11->fields)._sign = (int32_t)uStack_5._4_4_;
        method_01 = (MethodInfo *)&this->_firstAxisDescriptor;
        (pAVar11->fields)._index = iVar1;
        *(AxisDescriptor **)method_01 = pAVar11;
        func_?(method_01,pAVar11);
        if (cRam_? == '\0') {
          uStack_5._4_4_ = &TypeInfo__RTG__AxisDescriptor;
          uStack_5._0_4_ = &UNK_?;
          func_?();
          uStack_5 = CONCAT44(uStack_5._4_4_,&TypeInfo__RTG__PlaneIdHelper);
          VStack_9.asset = (VisualTreeAsset *)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
          uStack_5 = CONCAT44(TypeInfo__RTG__PlaneIdHelper,&UNK_?);
          func_?();
        }
        if (planeId == PlaneId__Enum_XY) {
          iVar12 = 1;
        }
        else {
          iVar12 = 0;
          if (planeId != PlaneId__Enum_ZX) {
            iVar12 = 2;
          }
        }
        if (cRam_? == '\0') {
          uStack_5._4_4_ =
               (AxisDescriptor__Class **)
               &
               MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
          ;
          uStack_5._0_4_ = &UNK_?;
          func_?();
          uStack_5 = CONCAT44(uStack_5._4_4_,
                               &
                               MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                              );
          VStack_9.asset = (VisualTreeAsset *)&UNK_?;
          func_?();
          VStack_9.asset =
               (VisualTreeAsset *)
               &
               MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
          ;
          VStack_9.path = (String *)&UNK_?;
          func_?();
          VStack_9.path = (String *)&TypeInfo__RTG__PlaneIdHelper;
          VStack_9.alias = (String *)&UNK_?;
          func_?();
          VStack_9.alias =
               (String *)&TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>;
          func_?();
          func_?(&
                          MethodInfo__RTG__PlaneIdHelper____c__DisplayClass10_0___GetSecondAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                         );
          func_?(&TypeInfo__RTG__PlaneIdHelper____c__DisplayClass10_0);
          cRam_? = '\x01';
        }
        uStack_5 = CONCAT44(TypeInfo__RTG__PlaneIdHelper____c__DisplayClass10_0,&UNK_?);
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar2,ExceptionArgument__Enum_obj,method_01);
        if (pOVar2 != (Object *)0x0) {
          pOVar2[1].klass = (Object__Class *)planeQuadrant;
          if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__PlaneIdHelper);
          }
          pLVar3 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
          if (pLVar3 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
            XVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                     XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                     List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                               ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_
                                 *)pLVar3,planeId,
                                MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                               );
            this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                      func_?(
                                     TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>
                                     );
            mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
            Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                      (this_00,pOVar2,
                       MethodInfo__RTG__PlaneIdHelper____c__DisplayClass10_0___GetSecondAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                       ,(MethodInfo *)0x0);
            if ((XVar4.xso != (XmlSchemaObject *)0x0) &&
               (pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[RTG::
                         PlaneIdHelper+PlaneQuadrantInfo]::
                         List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__FindAll
                                   ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)XVar4.xso,
                                    (Predicate_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this_00,
                                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                                   ), pLVar7 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0))
            {
              pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                       VisualTreeAsset+UsingEntry]::
                       List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                                 (&VStack_9,
                                  (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                                  pLVar7,0,
                                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                                 );
              uStack_5._0_4_ = (undefined *)pVVar8->alias;
              uStack_5._4_4_ = (AxisDescriptor__Class **)pVVar8->path;
              pVVar13 = pVVar8->asset;
              pAVar10 = TypeInfo__RTG__AxisDescriptor;
              pAVar11 = (AxisDescriptor *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)pAVar11,ExceptionArgument__Enum_obj,(MethodInfo *)pAVar10);
              (pAVar11->fields)._sign = (int32_t)pVVar13;
              (pAVar11->fields)._index = iVar12;
              this->_secondAxisDescriptor = pAVar11;
              func_?(&this->_secondAxisDescriptor,pAVar11);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

