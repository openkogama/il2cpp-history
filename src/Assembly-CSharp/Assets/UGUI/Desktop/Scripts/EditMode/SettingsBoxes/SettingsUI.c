
/* List`1[System.Int32] GetAcceptableIndexes(Int32) */

List_1_System_Int32_ *
Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
SettingsUI_GetAcceptableIndexes(SettingsUI *this,int32_t size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,size,MethodInfo__System__Collections__Generic__List<int>__List_int_);
  if (0 < size) {
    item = 0;
    if (this_00 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
code_?:
      func_?();
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      pLVar2 = (List_1_System_Int32_ *)(*pcVar1)();
      return pLVar2;
    }
    do {
      pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      piVar4 = &(this_00->fields)._version;
      *piVar4 = *piVar4 + 1;
      pMVar5 = (this_00->fields)._items;
      if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      uVar6 = (this_00->fields)._size;
      if (uVar6 < pMVar5->max_length) {
        (this_00->fields)._size = uVar6 + 1;
        if (pMVar5->max_length <= uVar6) goto code_?;
        (&pMVar5->vector[0].index)[uVar6] = item;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddWithResize
                  ((List_1_System_Int32_ *)this_00,item,pMVar3->klass->rgctx_data[0xe].method);
      }
      item = item + 1;
    } while (item < size);
  }
  return (List_1_System_Int32_ *)this_00;
}


/* Void InitializeSlider(SettingsSlider, String, Func`2[String,ValueTuple`2[Int32,Int32]]) */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
     SettingsUI_InitializeSlider
               (SettingsUI *this,SettingsSlider *slider,String *key,
               Func_2_String_ValueTuple_2_Int32_Int32_ *minMax,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (minMax != (Func_2_String_ValueTuple_2_Int32_Int32_ *)0x0) {
    uVar1 = (*(minMax->fields)._._.invoke_impl)
                      ((minMax->fields)._._.method_code,key,(minMax->fields)._._.method);
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields).itemData;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (slider != (SettingsSlider *)0x0) {
        unaff_ESI = TypeInfo__System__Single;
        if (TVar2.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
              (TypeInfo__System__Single->_0).element_class) {
            pfVar3 = (float *)func_?(TVar2.m_Index);
            SettingsSlider::SettingsSlider_Initialize
                      (slider,key,*pfVar3,(float)(int)uVar1,(float)(int)((ulonglong)uVar1 >> 0x20),
                       (MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  TVar2.m_Index = extraout_EDX;
code_?:
  func_?(TVar2.m_Index,unaff_ESI);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
     SettingsUI_OnColorEdited(SettingsUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_itemData);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).colorR;
  if (pSVar1 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).colorG;
    if (pSVar1 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
      pSVar1 = (this->fields).colorB;
      if (pSVar1 != (SettingsSlider *)0x0) {
        method_00 = (MethodInfo *)SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0)
        ;
        pSVar1 = (this->fields).colorA;
        if (pSVar1 != (SettingsSlider *)0x0) {
          puVar2 = &UNK_?;
          puStack_3 = (undefined *)SettingsSlider::SettingsSlider_get_Value(pSVar1,method_00);
          hashtable = (this->fields).itemData;
          colorKey = (this->fields).editingColorKey;
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          color.g = (float)pSVar1;
          color.r = (float)puVar2;
          color.b = (float)method_00;
          color.a = (float)puStack_3;
          Extensions::Extensions_SetColor(hashtable,colorKey,color,(MethodInfo *)0x0);
          this_00 = (this->fields).settingsBase;
          if (this_00 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged
                      (this_00,StringLiteral_itemData,(Object *)(this->fields).itemData,
                       (MethodInfo *)0x0);
            (this->fields).editingColorKey = ::StringLiteral__;
            func_?(&(this->fields).editingColorKey,::StringLiteral__);
            pGVar4 = (this->fields).content;
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,1,(MethodInfo *)0x0);
              pGVar4 = (this->fields).colorPicker;
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,0,(MethodInfo *)0x0);
                this_01 = (this->fields).canvas;
                value = (Vector2)(*(code *)(this->klass->vtable).get_NormalEditingCanvasSize.method)
                                           (this,(this->klass->vtable).get_ColorEditingCanvasSize.
                                                 methodPtr);
                if (this_01 != (RectTransform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_sizeDelta(this_01,value,(MethodInfo *)0x0);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnColorPressed(String) */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
     SettingsUI_OnColorPressed(SettingsUI *this,String *colorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorA);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_colorG);
    cRam_? = '\x01';
  }
  hashtable = (this->fields).itemData;
  hashtable_00 = (Dictionary_2_System_Object_System_Object_ *)
                 (*(code *)(this->klass->vtable).get_DefaultItemData.method)
                           (this,(this->klass->vtable).set_DefaultItemData.methodPtr);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pCVar1 = Extensions::Extensions_GetColor
                     ((Color *)&stack0xffffffec,hashtable_00,colorKey,(MethodInfo *)0x0);
  pCVar1 = Extensions::Extensions_GetColorOrDefault
                     ((Color *)&stack0xffffffec,hashtable,colorKey,*pCVar1,(MethodInfo *)0x0);
  value = pCVar1->g;
  this_01 = (this->fields).colorR;
  if (this_01 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_Initialize
              (this_01,StringLiteral_colorR,pCVar1->r,0.0,1.0,(MethodInfo *)0x0);
    pSVar2 = (this->fields).colorG;
    if (pSVar2 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar2,StringLiteral_colorG,value,0.0,1.0,(MethodInfo *)0x0);
      pSVar2 = (this->fields).colorB;
      if (pSVar2 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar2,StringLiteral_colorB,4.119822e-29,0.0,1.0,(MethodInfo *)0x0);
        pSVar2 = (this->fields).colorA;
        if (pSVar2 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar2,StringLiteral_colorA,(float)this_01,0.0,1.0,(MethodInfo *)0x0);
          pIVar3 = (this->fields).colorPickerPreview;
          if (pIVar3 != (Image *)0x0) {
            (*(code *)(pIVar3->klass->vtable).set_color.method)();
            key = Extensions::Extensions_AddSpacesToSentence(colorKey,(MethodInfo *)0x0);
            pTVar4 = (this->fields).colorText;
            TM::TM__(key,(MethodInfo *)0x0);
            if (pTVar4 != (Text *)0x0) {
              (*(code *)(pTVar4->klass->vtable).set_text.method)();
              (this->fields).editingColorKey = colorKey;
              func_?();
              pGVar5 = (this->fields).content;
              if (pGVar5 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar5,0,(MethodInfo *)0x0);
                pGVar5 = (this->fields).colorPicker;
                if (pGVar5 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar5,1,(MethodInfo *)0x0);
                  this_00 = (this->fields).canvas;
                  value_00 = (Vector2)(*(code *)(this->klass->vtable).get_ColorEditingCanvasSize.
                                                method)();
                  if (this_00 != (RectTransform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_set_sizeDelta(this_00,value_00,(MethodInfo *)0x0);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
     SettingsUI_OnSettingChanged(SettingsUI *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if (key != (String *)0x0) {
    if (5 < (key->fields)._stringLength) {
      a = mscorlib.dll::System::String::String_Substring_1(key,0,5,(MethodInfo *)0x0);
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_color,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pSVar2 = (this->fields).colorR;
        pIVar3 = (this->fields).colorPickerPreview;
        if (pSVar2 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
          pSVar2 = (this->fields).colorG;
          if (pSVar2 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
            pSVar2 = (this->fields).colorB;
            if (pSVar2 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
              pSVar2 = (this->fields).colorA;
              if ((pSVar2 != (SettingsSlider *)0x0) &&
                 (SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0),
                 pIVar3 != (Image *)0x0)) {
                (*(code *)(pIVar3->klass->vtable).set_color.method)();
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
    this_00 = (this->fields).itemData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      this_01 = (this->fields).settingsBase;
      if (this_01 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged
                  (this_01,StringLiteral_itemData,(Object *)(this->fields).itemData,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateColorPickerPreview() */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
     SettingsUI_UpdateColorPickerPreview(SettingsUI *this,MethodInfo *method)

{
  pSVar1 = (this->fields).colorR;
  pIVar2 = (this->fields).colorPickerPreview;
  if (pSVar1 != (SettingsSlider *)0x0) {
    fVar3 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).colorG;
    if (pSVar1 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
      pSVar1 = (this->fields).colorB;
      if (pSVar1 != (SettingsSlider *)0x0) {
        pSVar1 = (SettingsSlider *)
                 SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
        if ((this->fields).colorA != (SettingsSlider *)0x0) {
          puVar4 = &UNK_?;
          fVar5 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
          if (pIVar2 != (Image *)0x0) {
            (*(code *)(pIVar2->klass->vtable).set_color.method)
                      (pIVar2,fVar3,puVar4,pSVar1,fVar5,
                       (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
            return;
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


/* SettingsUI() */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
     SettingsUI__ctor(SettingsUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).editingColorKey = ::StringLiteral__;
  func_?(&(this->fields).editingColorKey,::StringLiteral__);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Vector2 get_ColorEditingCanvasSize() */

Vector2 Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
        SettingsUI_get_ColorEditingCanvasSize(SettingsUI *this,MethodInfo *method)

{
  VVar1.y = 750.0;
  VVar1.x = 800.0;
  return VVar1;
}


/* Vector2 get_NormalEditingCanvasSize() */

Vector2 Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
        SettingsUI_get_NormalEditingCanvasSize(SettingsUI *this,MethodInfo *method)

{
  VVar1.y = 860.0;
  VVar1.x = 600.0;
  return VVar1;
}

