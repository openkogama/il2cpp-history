
/* Void ActivateScoreImage(WinningConditionType) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
               (DebriefingWinnerGUI *this,WinningConditionType__Enum statType,MethodInfo *method)

{
  pDVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = (Image *)0x0;
  pLVar2 = (this->fields).winConImages;
  while (pLVar2 != (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Count__
                       );
    if ((int)pOVar3 <= (int)index) {
      return;
    }
    pLVar2 = (pDVar1->fields).winConImages;
    if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
    pDVar4 = mscorlib.dll::System::Collections::Generic::
             List`1[DebriefingWinnerGUI+WinningConditionData]::
             List_1_DebriefingWinnerGUI_WinningConditionData__get_Item
                       (&DStack_5,pLVar2,(int32_t)index,
                        MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                       );
    pLVar2 = (pDVar1->fields).winConImages;
    DStack_5.InfoBG = pDVar4->InfoBG;
    if (statType == pDVar4->ScoreType) {
      if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      DStack_5.WinningConditionImage =
           (GameObject *)
           MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
      ;
      DStack_5.ScoreType = (int32_t)pLVar2;
      DStack_5.ScoreImage = index;
      iVar6 = func_?(&DStack_5);
      DStack_5.InfoBG = *(GameObject **)(iVar6 + 0x10);
      if ((*(Component_1 **)(iVar6 + 4) == (Component_1 *)0x0) ||
         (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (*(Component_1 **)(iVar6 + 4),(MethodInfo *)0x0),
         pGVar7 == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar7,1,(MethodInfo *)0x0);
      pLVar2 = (pDVar1->fields).winConImages;
      if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      iVar6 = func_?(&DStack_5,pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                             );
      pGVar7 = *(GameObject **)(iVar6 + 8);
      DStack_5.InfoBG = *(GameObject **)(iVar6 + 0x10);
      if (pGVar7 == (GameObject *)0x0) break;
      this._0_1_ = 1;
    }
    else {
      if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      DStack_5.WinningConditionImage =
           (GameObject *)
           MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
      ;
      DStack_5.ScoreType = (int32_t)pLVar2;
      DStack_5.ScoreImage = index;
      iVar6 = func_?(&DStack_5);
      DStack_5.InfoBG = *(GameObject **)(iVar6 + 0x10);
      if ((*(Component_1 **)(iVar6 + 4) == (Component_1 *)0x0) ||
         (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (*(Component_1 **)(iVar6 + 4),(MethodInfo *)0x0),
         pGVar7 == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar7,0,(MethodInfo *)0x0);
      pLVar2 = (pDVar1->fields).winConImages;
      if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      iVar6 = func_?(&DStack_5,pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                             );
      pGVar7 = *(GameObject **)(iVar6 + 8);
      DStack_5.InfoBG = *(GameObject **)(iVar6 + 0x10);
      if (pGVar7 == (GameObject *)0x0) break;
      this._0_1_ = 0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar7,(bool)this,(MethodInfo *)0x0);
    index = (Image *)((int)&index->klass + 1);
    pLVar2 = (pDVar1->fields).winConImages;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetAdditionalInformation(String, WinningConditionType) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetAdditionalInformation
               (DebriefingWinnerGUI *this,String *text,WinningConditionType__Enum winConType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (text,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  index = 0;
  pLVar2 = (this->fields).winConImages;
  while (pLVar2 != (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Count__
                       );
    if ((int)pOVar3 <= index) {
      return;
    }
    pLVar2 = (this->fields).winConImages;
    if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
    pDVar4 = mscorlib.dll::System::Collections::Generic::
             List`1[DebriefingWinnerGUI+WinningConditionData]::
             List_1_DebriefingWinnerGUI_WinningConditionData__get_Item
                       (&DStack_5,pLVar2,index,
                        MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                       );
    DStack_5.InfoBG = pDVar4->InfoBG;
    if (pDVar4->ScoreType == winConType) {
      if ((this->fields).winConImages == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0)
      break;
      DStack_5.ScoreType =
           (int32_t)
           MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
      ;
      iVar6 = func_?();
      if (*(GameObject **)(iVar6 + 0x10) == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(iVar6 + 0x10),1,(MethodInfo *)0x0);
      pLVar2 = (this->fields).winConImages;
      if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      iVar6 = func_?(&stack0xffffffd4,pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                             );
      if (*(int *)(iVar6 + 0xc) == 0) break;
      func_?(0x49,*(int *)(iVar6 + 0xc),text);
    }
    index = index + 1;
    pLVar2 = (this->fields).winConImages;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetTimerText(String) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetTimerText
               (DebriefingWinnerGUI *this,String *time,MethodInfo *method)

{
  pTVar1 = (this->fields).timer;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,time,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetWinValue(String) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinValue
               (DebriefingWinnerGUI *this,String *winVal,MethodInfo *method)

{
  pTVar1 = (this->fields).winValue;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,winVal,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetWinnerImage(Color, RenderTexture) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerImage
               (DebriefingWinnerGUI *this,Color startColor,RenderTexture *image,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
                     ((Vector4 *)&stack0xffffffec,(Vector4)startColor,1.25,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  uVar4 = pVVar1->z;
  end.b = (float)uVar4;
  end.g = (float)uVar3;
  end.r = (float)uVar2;
  this_00 = (this->fields).backgroundImage;
  if (this_00 != (ImageAnimator *)0x0) {
    end.a = 1.0;
    ImageAnimator::ImageAnimator_SetColor(this_00,startColor,end,(MethodInfo *)0x0);
    this_01 = (this->fields).winnerImage;
    if (this_01 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_01,(Texture *)image,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetWinnerText(String) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerText
               (DebriefingWinnerGUI *this,String *winner,MethodInfo *method)

{
  pTVar1 = (this->fields).winnerName;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,winner,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

