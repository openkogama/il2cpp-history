
/* Void Update() */

void Assembly-CSharp.dll::ThemeSelectionGridResizer::ThemeSelectionGridResizer_Update
               (ThemeSelectionGridResizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    this_00 = (Transform *)0x0;
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      this_00 = pTVar1;
    }
    if (this_00 == (Transform *)0x0) {
      func_?(pTVar1);
    }
    else {
      pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xffffffe0,(RectTransform *)this_00,(MethodInfo *)0x0);
      fVar3 = SubscribableVariableBase`1[System::Single]::
              SubscribableVariableBase_1_System_Single__get_Value
                        ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffd0,
                         (MethodInfo *)pRVar2->m_XMin);
      if (fVar3 == (this->fields).prevSize) {
        return;
      }
      pGVar4 = (this->fields).grid;
      if (pGVar4 != (GridLayoutGroup *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::GridLayoutGroup::GridLayoutGroup_get_spacing
                  (pGVar4,(MethodInfo *)0x0);
        pGVar4 = (this->fields).grid;
        if ((pGVar4 != (GridLayoutGroup *)0x0) &&
           (pRVar5 = (RectOffset *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pGVar4,
                                (MethodInfo *)0x0), pRVar5 != (RectOffset *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_left
                    (pRVar5,(MethodInfo *)0x0);
          pGVar4 = (this->fields).grid;
          if ((pGVar4 != (GridLayoutGroup *)0x0) &&
             (pRVar5 = (RectOffset *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pGVar4
                                  ,(MethodInfo *)0x0), pRVar5 != (RectOffset *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_right
                      (pRVar5,(MethodInfo *)0x0);
            pGVar4 = (this->fields).grid;
            value.x = 0.0;
            value.y = 0.0;
            func_?();
            if (pGVar4 != (GridLayoutGroup *)0x0) {
              fVar3 = value.x;
              UnityEngine.UI.dll::UnityEngine::UI::GridLayoutGroup::GridLayoutGroup_set_cellSize
                        (pGVar4,value,(MethodInfo *)0x0);
              (this->fields).prevSize = fVar3;
              return;
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


/* RectTransform get_RectTransform() */

RectTransform *
Assembly-CSharp.dll::ThemeSelectionGridResizer::ThemeSelectionGridResizer_get_RectTransform
          (ThemeSelectionGridResizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pTVar2 = (Transform *)0x0;
  if (pTVar1 != (Transform *)0x0) {
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar2 = pTVar1;
    }
    if (pTVar2 == (Transform *)0x0) {
      func_?(pTVar1);
      pcVar3 = (code *)swi(3);
      pRVar4 = (RectTransform *)(*pcVar3)();
      return pRVar4;
    }
  }
  return (RectTransform *)pTVar2;
}

