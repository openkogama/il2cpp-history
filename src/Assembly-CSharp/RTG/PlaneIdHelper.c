
/* AxisDescriptor GetFirstAxisDescriptor(PlaneId, PlaneQuadrantId) */

AxisDescriptor *
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_GetFirstAxisDescriptor
          (PlaneId__Enum planeId,PlaneQuadrantId__Enum planeQuadrant,MethodInfo *method)

{
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
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)planeQuadrant;
    if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__PlaneIdHelper);
    }
    this = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
    if (this != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
      XVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
              XmlSchemaObjectTable+XmlSchemaObjectEntry]::
              List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                        ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)this
                         ,planeId,
                         MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                        );
      uStack_3 = CONCAT44(XVar2.qname,(undefined4)uStack_3);
      this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                func_?(TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
      mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
      Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                (this_00,value,
                 MethodInfo__RTG__PlaneIdHelper____c__DisplayClass9_0___GetFirstAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 ,(MethodInfo *)0x0);
      if (XVar2.xso != (XmlSchemaObject *)0x0) {
        this_01 = mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__FindAll
                            ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)XVar2.xso,
                             (Predicate_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this_00,
                             MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                            );
        if (this_01 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
          pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_5,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_01,0
                              ,
                              MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                             );
          uStack_3._0_4_ = pVVar4->alias;
          uStack_3._4_4_ = (int32_t)pVVar4->path;
          method_01 = TypeInfo__RTG__AxisDescriptor;
          pAVar6 = (AxisDescriptor *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)pAVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
          (pAVar6->fields)._index = iVar1;
          (pAVar6->fields)._sign = uStack_3._4_4_;
          return pAVar6;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pAVar6 = (AxisDescriptor *)(*pcVar7)();
  return pAVar6;
}


/* AxisSign GetFirstAxisSign(PlaneId, PlaneQuadrantId) */

AxisSign__Enum
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_GetFirstAxisSign
          (PlaneId__Enum planeId,PlaneQuadrantId__Enum planeQuadrant,MethodInfo *method)

{
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
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)planeQuadrant;
    if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__PlaneIdHelper);
    }
    this = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
    if (this != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
      XVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
              XmlSchemaObjectTable+XmlSchemaObjectEntry]::
              List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                        ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)this
                         ,planeId,
                         MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                        );
      _uStack_10 = CONCAT44(XVar1.qname,uStack_2);
      this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                func_?(TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
      mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
      Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                (this_00,value,
                 MethodInfo__RTG__PlaneIdHelper____c__DisplayClass9_0___GetFirstAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 ,(MethodInfo *)0x0);
      if (XVar1.xso != (XmlSchemaObject *)0x0) {
        this_01 = mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__FindAll
                            ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)XVar1.xso,
                             (Predicate_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this_00,
                             MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                            );
        if (this_01 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
          pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_4,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_01,0
                              ,
                              MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                             );
          uVar5 = pVVar3->path;
          return uVar5;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  AVar7 = (*pcVar6)();
  return AVar7;
}


/* PlaneQuadrantId GetQuadrantFromAxesSigns(PlaneId, AxisSign, AxisSign) */

PlaneQuadrantId__Enum
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_GetQuadrantFromAxesSigns
          (PlaneId__Enum planeId,AxisSign__Enum firstAxisSign,AxisSign__Enum secondAxisSign,
          MethodInfo *method)

{
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
                    MethodInfo__RTG__PlaneIdHelper____c__DisplayClass11_0___GetQuadrantFromAxesSigns_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                   );
    func_?(&TypeInfo__RTG__PlaneIdHelper____c__DisplayClass11_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__PlaneIdHelper____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)firstAxisSign;
    value[1].monitor = (MonitorData *)secondAxisSign;
    if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__PlaneIdHelper);
    }
    this = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
    if (this != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
      XVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
              XmlSchemaObjectTable+XmlSchemaObjectEntry]::
              List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                        ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)this
                         ,planeId,
                         MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                        );
      this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                func_?(TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
      mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
      Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                (this_00,value,
                 MethodInfo__RTG__PlaneIdHelper____c__DisplayClass11_0___GetQuadrantFromAxesSigns_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 ,(MethodInfo *)0x0);
      if (XVar1.xso != (XmlSchemaObject *)0x0) {
        this_01 = mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__FindAll
                            ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)XVar1.xso,
                             (Predicate_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this_00,
                             MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                            );
        if (this_01 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
          pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_3,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_01,0
                              ,
                              MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                             );
          uVar4 = pVVar2->alias;
          return uVar4;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  PVar6 = (*pcVar5)();
  return PVar6;
}


/* AxisDescriptor GetSecondAxisDescriptor(PlaneId, PlaneQuadrantId) */

AxisDescriptor *
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_GetSecondAxisDescriptor
          (PlaneId__Enum planeId,PlaneQuadrantId__Enum planeQuadrant,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__AxisDescriptor);
    func_?(&TypeInfo__RTG__PlaneIdHelper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__PlaneIdHelper);
  }
  if (planeId == PlaneId__Enum_XY) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
    if (planeId != PlaneId__Enum_ZX) {
      iVar1 = 2;
    }
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
                    MethodInfo__RTG__PlaneIdHelper____c__DisplayClass10_0___GetSecondAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                   );
    func_?(&TypeInfo__RTG__PlaneIdHelper____c__DisplayClass10_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__PlaneIdHelper____c__DisplayClass10_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)planeQuadrant;
    if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__PlaneIdHelper);
    }
    this = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
    if (this != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
      XVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
              XmlSchemaObjectTable+XmlSchemaObjectEntry]::
              List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                        ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)this
                         ,planeId,
                         MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                        );
      VStack_3.path = (String *)XVar2.qname;
      this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                func_?(TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
      mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
      Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                (this_00,value,
                 MethodInfo__RTG__PlaneIdHelper____c__DisplayClass10_0___GetSecondAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 ,(MethodInfo *)0x0);
      if ((XVar2.xso != (XmlSchemaObject *)0x0) &&
         (this_01 = mscorlib.dll::System::Collections::Generic::List`1[RTG::
                    PlaneIdHelper+PlaneQuadrantInfo]::
                    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__FindAll
                              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)XVar2.xso,
                               (Predicate_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this_00,
                               MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                              ), this_01 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0)) {
        pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           (&VStack_3,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_01,0,
                            MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                           );
        pVVar5 = pVVar4->asset;
        method_01 = TypeInfo__RTG__AxisDescriptor;
        pAVar6 = (AxisDescriptor *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pAVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
        (pAVar6->fields)._sign = (int32_t)pVVar5;
        (pAVar6->fields)._index = iVar1;
        return pAVar6;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pAVar6 = (AxisDescriptor *)(*pcVar7)();
  return pAVar6;
}


/* AxisSign GetSecondAxisSign(PlaneId, PlaneQuadrantId) */

AxisSign__Enum
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_GetSecondAxisSign
          (PlaneId__Enum planeId,PlaneQuadrantId__Enum planeQuadrant,MethodInfo *method)

{
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
                    MethodInfo__RTG__PlaneIdHelper____c__DisplayClass10_0___GetSecondAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                   );
    func_?(&TypeInfo__RTG__PlaneIdHelper____c__DisplayClass10_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__PlaneIdHelper____c__DisplayClass10_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)planeQuadrant;
    if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__PlaneIdHelper);
    }
    this = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
    if (this != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
      XVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
              XmlSchemaObjectTable+XmlSchemaObjectEntry]::
              List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                        ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)this
                         ,planeId,
                         MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                        );
      VStack_2.path = (String *)XVar1.qname;
      this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                func_?(TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
      mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
      Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                (this_00,value,
                 MethodInfo__RTG__PlaneIdHelper____c__DisplayClass10_0___GetSecondAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 ,(MethodInfo *)0x0);
      if (XVar1.xso != (XmlSchemaObject *)0x0) {
        this_01 = mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__FindAll
                            ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)XVar1.xso,
                             (Predicate_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)this_00,
                             MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                            );
        if (this_01 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
          pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_2,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_01,0
                              ,
                              MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                             );
          return (AxisSign__Enum)pVVar3->asset;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  AVar5 = (*pcVar4)();
  return AVar5;
}


/* PlaneId NormalAxisIndexToPlaneId(Int32) */

PlaneId__Enum
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_NormalAxisIndexToPlaneId
          (int32_t axisIndex,MethodInfo *method)

{
  if (axisIndex != 0) {
    PVar1 = PlaneId__Enum_ZX;
    if (axisIndex != 1) {
      PVar1 = PlaneId__Enum_XY;
    }
    return PVar1;
  }
  return PlaneId__Enum_YZ;
}


/* Int32 PlaneIdToFirstAxisIndex(PlaneId) */

int32_t Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_PlaneIdToFirstAxisIndex
                  (PlaneId__Enum planeId,MethodInfo *method)

{
  iVar1 = 0;
  if (planeId != PlaneId__Enum_XY) {
    iVar1 = (planeId == PlaneId__Enum_ZX) + 1;
  }
  return iVar1;
}


/* Int32 PlaneIdToSecondAxisIndex(PlaneId) */

int32_t Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_PlaneIdToSecondAxisIndex
                  (PlaneId__Enum planeId,MethodInfo *method)

{
  if (planeId != PlaneId__Enum_XY) {
    iVar1 = 0;
    if (planeId != PlaneId__Enum_ZX) {
      iVar1 = 2;
    }
    return iVar1;
  }
  return 1;
}


/* PlaneIdHelper() */

void Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__Add_RTG__PlaneIdHelper__PlaneInfo_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__set_Item_int__RTG__PlaneIdHelper__PlaneInfo_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>);
    func_?(&TypeInfo__RTG__PlaneIdHelper);
    func_?(&TypeInfo__RTG__PlaneId);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(
                           TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,3,
             MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__List_int_
            );
  if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
    func_?(this,0,0,
                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__Add_RTG__PlaneIdHelper__PlaneInfo_
                   );
    func_?(this,0,0,
                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__Add_RTG__PlaneIdHelper__PlaneInfo_
                   );
    func_?(this,0,0,
                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__Add_RTG__PlaneIdHelper__PlaneInfo_
                   );
    TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo =
         (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)this;
    func_?(TypeInfo__RTG__PlaneIdHelper->static_fields,this);
    pPVar1 = (PlaneId__Enum__Array *)func_?(TypeInfo__RTG__PlaneId,3);
    if (pPVar1 != (PlaneId__Enum__Array *)0x0) {
      if ((pPVar1->max_length < 2) || (pPVar1->vector[1] = PlaneId__Enum_ZX, pPVar1->max_length < 3)
         ) goto code_?;
      pPVar1->vector[2] = PlaneId__Enum_YZ;
      TypeInfo__RTG__PlaneIdHelper->static_fields->_allPlaneIds = pPVar1;
      func_?(&TypeInfo__RTG__PlaneIdHelper->static_fields->_allPlaneIds,pPVar1);
      VStack_2 = (VisualTreeAsset_UxmlObjectEntry)((ulonglong)VStack_2 & 0xffffffff00000000);
      pLVar3 = (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>
                              );
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
                 MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__List__
                );
      if (pLVar3 != (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)0x0) {
        func_?(pLVar3,
                        MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                        ,0,0);
        func_?(pLVar3,1,1,0,
                        MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                       );
        func_?(pLVar3,2,1,1,
                        MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                       );
        func_?(pLVar3,3,0,1,
                        MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                       );
        VStack_2.uxmlObjectAssets = pLVar3;
        func_?(&VStack_2.uxmlObjectAssets,pLVar3);
        pLVar4 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
        if (pLVar4 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          VisualTreeAsset+UxmlObjectEntry]::
          List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__set_Item
                    ((List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)pLVar4,0,
                     VStack_2,
                     MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__set_Item_int__RTG__PlaneIdHelper__PlaneInfo_
                    );
          VStack_2.parentId = 1;
          VStack_2.uxmlObjectAssets = (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)0x0;
          pLVar3 = (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)
                   func_?(
                                  TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>
                                  );
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
                     MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__List__
                    );
          if (pLVar3 != (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)0x0) {
            func_?(pLVar3,
                            MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                            ,0,1);
            func_?(pLVar3,1,0,0,
                            MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                           );
            func_?(pLVar3,2,1,0,
                            MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                           );
            func_?(pLVar3,3,1,1,
                            MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                           );
            VStack_2.uxmlObjectAssets = pLVar3;
            func_?(&VStack_2.uxmlObjectAssets,pLVar3);
            pLVar4 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
            if (pLVar4 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UxmlObjectEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__set_Item
                        ((List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)pLVar4,1,
                         VStack_2,
                         MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__set_Item_int__RTG__PlaneIdHelper__PlaneInfo_
                        );
              VStack_2.parentId = 2;
              VStack_2.uxmlObjectAssets = (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)0x0;
              pLVar3 = (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)
                       func_?(
                                      TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>
                                      );
              mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                        ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                         pLVar3,
                         MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__List__
                        );
              if (pLVar3 != (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)0x0) {
                func_?(pLVar3,
                                MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                                ,0,0);
                func_?(pLVar3,1,1,0,
                                MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                               );
                func_?(pLVar3,2,1,1,
                                MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                               );
                func_?(pLVar3,3,0,1,
                                MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                               );
                VStack_2.uxmlObjectAssets = pLVar3;
                func_?(&VStack_2.uxmlObjectAssets,pLVar3);
                pLVar4 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
                if (pLVar4 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  VisualTreeAsset+UxmlObjectEntry]::
                  List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__set_Item
                            ((List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)
                             pLVar4,2,VStack_2,
                             MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__set_Item_int__RTG__PlaneIdHelper__PlaneInfo_
                            );
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
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PlaneId[] get_AllPlaneIds() */

PlaneId__Enum__Array *
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_get_AllPlaneIds(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pPVar1 = TypeInfo__RTG__PlaneIdHelper->static_fields->_allPlaneIds;
  if (pPVar1 != (PlaneId__Enum__Array *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::PlayableBehaviour_Clone
              ((PlayableBehaviour *)pPVar1,(MethodInfo *)0x0);
    pPVar1 = (PlaneId__Enum__Array *)func_?();
    return pPVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pPVar1 = (PlaneId__Enum__Array *)(*pcVar4)();
  return pPVar1;
}

