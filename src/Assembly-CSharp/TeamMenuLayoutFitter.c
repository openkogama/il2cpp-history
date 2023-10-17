
/* Void FixLayout() */

void Assembly-CSharp.dll::TeamMenuLayoutFitter::TeamMenuLayoutFitter_FixLayout
               (TeamMenuLayoutFitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                   );
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  DStack_1._index = 0;
  DStack_1._version = 0;
  DStack_1._currentValue = 0.0;
  pIVar2 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                     ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this,
                      UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                     );
  pVVar3 = (this->fields).layoutGroup;
  if (pVVar3 != (VerticalLayoutGroup *)0x0) {
    (*(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.methodPtr)
              (pVVar3,(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.method);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pTVar5 = (Transform *)0x0;
      if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar5 = pTVar4;
      }
      pRVar6 = TypeInfo__UnityEngine__RectTransform;
      if (pTVar5 != (Transform *)0x0) {
        pTVar5 = (Transform *)0x0;
        if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar5 = pTVar4;
        }
        pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           (&RStack_8,(RectTransform *)pTVar5,(MethodInfo *)0x0);
        DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)pRVar7->m_XMin;
        DStack_1._index = (int32_t)pRVar7->m_YMin;
        DStack_1._version = (int32_t)pRVar7->m_Width;
        DStack_1._currentValue = pRVar7->m_Height;
        fStack_9 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                   Int32Enum,System::Single]::
                   Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                             (&DStack_1,(MethodInfo *)0x0);
        fStack_9 = fStack_9 * _UNK_?;
        pVVar3 = (this->fields).layoutGroup;
        if (pVVar3 == (VerticalLayoutGroup *)0x0) goto code_?;
        fStack_10 = *(float *)&(pVVar3->fields)._.m_ChildForceExpandWidth;
        iVar11 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
        HorizontalOrVerticalLayoutGroup_set_spacing
                  ((HorizontalOrVerticalLayoutGroup *)pVVar3,
                   (fStack_10 / _UNK_?) * (float)iVar11,(MethodInfo *)0x0);
        pMVar12 = (MonitorData *)0x0;
        if (pIVar2 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
        pRVar6 = (RectTransform__Class *)(pIVar2 + 2);
        while( true ) {
          if ((int)pIVar2[1].monitor <= (int)pMVar12) {
            return;
          }
          if (pIVar2[1].monitor <= pMVar12) break;
          pIVar13 = (pRVar6->_0).image;
          if (pIVar13 == (Il2CppImage *)0x0) goto code_?;
          (**(code **)(pIVar13->name + 0x1cc))(pIVar13,fStack_9,*(undefined4 *)(pIVar13->name + 0x1d0))
          ;
          if (pIVar2[1].monitor <= pMVar12) break;
          pIVar13 = (pRVar6->_0).image;
          if (pIVar13 == (Il2CppImage *)0x0) goto code_?;
          (**(code **)(pIVar13->name + 0x1ec))(pIVar13,fStack_9,*(undefined4 *)(pIVar13->name + 0x1f0))
          ;
          pVVar3 = (this->fields).layoutGroup;
          if (pVVar3 == (VerticalLayoutGroup *)0x0) goto code_?;
          (*(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.methodPtr)
                    (pVVar3,(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.method);
          pMVar12 = pMVar12 + 1;
          pRVar6 = (RectTransform__Class *)&(pRVar6->_0).gc_desc;
        }
        func_?();
        pTVar4 = extraout_EDX;
      }
      func_?(pTVar4,pRVar6);
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeamMenuLayoutFitter::TeamMenuLayoutFitter_Start
               (TeamMenuLayoutFitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                   );
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  DStack_1._index = 0;
  DStack_1._version = 0;
  DStack_1._currentValue = 0.0;
  pIVar2 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                     ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this,
                      UnityEngine__UI__LayoutElement__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::UI::LayoutElement>______
                     );
  pVVar3 = (this->fields).layoutGroup;
  if (pVVar3 != (VerticalLayoutGroup *)0x0) {
    (*(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.methodPtr)
              (pVVar3,(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.method);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pTVar5 = (Transform *)0x0;
      if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar5 = pTVar4;
      }
      pRVar6 = TypeInfo__UnityEngine__RectTransform;
      if (pTVar5 != (Transform *)0x0) {
        pTVar5 = (Transform *)0x0;
        if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar5 = pTVar4;
        }
        pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           (&RStack_8,(RectTransform *)pTVar5,(MethodInfo *)0x0);
        DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)pRVar7->m_XMin;
        DStack_1._index = (int32_t)pRVar7->m_YMin;
        DStack_1._version = (int32_t)pRVar7->m_Width;
        DStack_1._currentValue = pRVar7->m_Height;
        fStack_9 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                   Int32Enum,System::Single]::
                   Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                             (&DStack_1,(MethodInfo *)0x0);
        fStack_9 = fStack_9 * _UNK_?;
        pVVar3 = (this->fields).layoutGroup;
        if (pVVar3 == (VerticalLayoutGroup *)0x0) goto code_?;
        fStack_10 = *(float *)&(pVVar3->fields)._.m_ChildForceExpandWidth;
        iVar11 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
        HorizontalOrVerticalLayoutGroup_set_spacing
                  ((HorizontalOrVerticalLayoutGroup *)pVVar3,
                   (fStack_10 / _UNK_?) * (float)iVar11,(MethodInfo *)0x0);
        pMVar12 = (MonitorData *)0x0;
        if (pIVar2 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
        pRVar6 = (RectTransform__Class *)(pIVar2 + 2);
        while( true ) {
          if ((int)pIVar2[1].monitor <= (int)pMVar12) {
            return;
          }
          if (pIVar2[1].monitor <= pMVar12) break;
          pIVar13 = (pRVar6->_0).image;
          if (pIVar13 == (Il2CppImage *)0x0) goto code_?;
          (**(code **)(pIVar13->name + 0x1cc))(pIVar13,fStack_9,*(undefined4 *)(pIVar13->name + 0x1d0))
          ;
          if (pIVar2[1].monitor <= pMVar12) break;
          pIVar13 = (pRVar6->_0).image;
          if (pIVar13 == (Il2CppImage *)0x0) goto code_?;
          (**(code **)(pIVar13->name + 0x1ec))(pIVar13,fStack_9,*(undefined4 *)(pIVar13->name + 0x1f0))
          ;
          pVVar3 = (this->fields).layoutGroup;
          if (pVVar3 == (VerticalLayoutGroup *)0x0) goto code_?;
          (*(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.methodPtr)
                    (pVVar3,(pVVar3->klass->vtable).CalculateLayoutInputVertical_1.method);
          pMVar12 = pMVar12 + 1;
          pRVar6 = (RectTransform__Class *)&(pRVar6->_0).gc_desc;
        }
        func_?();
        pTVar4 = extraout_EDX;
      }
      func_?(pTVar4,pRVar6);
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

