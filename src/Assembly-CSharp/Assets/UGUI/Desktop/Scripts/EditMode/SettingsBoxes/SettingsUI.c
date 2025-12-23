
/* List`1[System.Int32] GetAcceptableIndexes(Int32) */

List_1_System_Int32_ *
Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
SettingsUI_GetAcceptableIndexes(SettingsUI *this,int32_t size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_UInt32Enum_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(this_00,size,MethodInfo__System__Collections__Generic__List<int>__List_int_);
  if (0 < size) {
    item = 0;
    if (this_00 == (List_1_System_UInt32Enum_ *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      pLVar2 = (List_1_System_Int32_ *)(*pcVar1)();
      return pLVar2;
    }
    do {
      pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      piVar4 = &(this_00->fields)._version;
      *piVar4 = *piVar4 + 1;
      pUVar5 = (this_00->fields)._items;
      if (pUVar5 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
      uVar6 = (this_00->fields)._size;
      if (uVar6 < (uint)pUVar5->max_length) {
        (this_00->fields)._size = uVar6 + 1;
        if ((uint)pUVar5->max_length <= uVar6) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          pLVar2 = (List_1_System_Int32_ *)(*pcVar1)();
          return pLVar2;
        }
        pUVar5->vector[(int)uVar6] = item;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__AddWithResize(this_00,item,pMVar3->klass->rgctx_data[0xe].method);
      }
      item = item + 1;
    } while ((int)item < size);
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (minMax != (Func_2_String_ValueTuple_2_Int32_Int32_ *)0x0) {
    uVar1 = (*(minMax->fields)._._.invoke_impl)
                      ((minMax->fields)._._.method_code,key,(minMax->fields)._._.method);
    this_00 = (this->fields).itemData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if ((slider != (SettingsSlider *)0x0) && (pOVar2 != (Object *)0x0)) {
        if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          iStackX_1c = (int)((ulonglong)uVar1 >> 0x20);
          SettingsSlider::SettingsSlider_Initialize
                    (slider,key,*(float *)&pOVar2[1].klass,(float)(int)uVar1,(float)iStackX_1c,
                     (MethodInfo *)0x0);
          return;
        }
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
     SettingsUI_OnColorEdited(SettingsUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).colorR;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
    fVar3 = (float)(*(pSVar2->klass->vtable).get_value.methodPtr)
                              (pSVar2,(pSVar2->klass->vtable).get_value.method);
    pSVar1 = (this->fields).colorG;
    if ((pSVar1 != (SettingsSlider *)0x0) &&
       (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
      fVar4 = (float)(*(pSVar2->klass->vtable).get_value.methodPtr)
                                (pSVar2,(pSVar2->klass->vtable).get_value.method);
      pSVar1 = (this->fields).colorB;
      if ((pSVar1 != (SettingsSlider *)0x0) &&
         (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
        fVar5 = (float)(*(pSVar2->klass->vtable).get_value.methodPtr)
                                  (pSVar2,(pSVar2->klass->vtable).get_value.method);
        pSVar1 = (this->fields).colorA;
        if ((pSVar1 != (SettingsSlider *)0x0) &&
           (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
          fStack_6 = (float)(*(pSVar2->klass->vtable).get_value.methodPtr)
                                       (pSVar2,(pSVar2->klass->vtable).get_value.method);
          hashtable = (this->fields).itemData;
          colorKey = (this->fields).editingColorKey;
          auStack_7._4_4_ = fVar4;
          auStack_7._0_4_ = fVar3;
          auStack_7._8_4_ = fVar5;
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          Extensions::Extensions_SetColor(hashtable,colorKey,(Color *)auStack_7,(MethodInfo *)0x0);
          this_00 = (this->fields).settingsBase;
          if (this_00 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged
                      (this_00,StringLiteral_itemData,(Object *)(this->fields).itemData,
                       (MethodInfo *)0x0);
            bVar8 = iRam_? != 0;
            (this->fields).editingColorKey = ::StringLiteral__;
            if (bVar8) {
              uVar9 = (uint)((ulonglong)&(this->fields).editingColorKey >> 0xc);
              uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
              do {
                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                LOCK();
                bVar8 = uVar11 == *puVar12;
                if (bVar8) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
            pGVar13 = (this->fields).content;
            if (pGVar13 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar13,1,(MethodInfo *)0x0);
              pGVar13 = (this->fields).colorPicker;
              if (pGVar13 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar13,0,(MethodInfo *)0x0);
                obj = (this->fields).canvas;
                auStack_14[0] =
                     (*(this->klass->vtable).get_NormalEditingCanvasSize.methodPtr)
                               (this,(this->klass->vtable).get_NormalEditingCanvasSize.method);
                if (obj != (RectTransform *)0x0) {
                  if (cRam_? == '\0') {
                    stack0xffffffffffffffc0 = &UNK_?;
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                  ,auStack_14[0],0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (obj == (RectTransform *)0x0) {
                    stack0xffffffffffffffc0 = &UNK_?;
                    FUN_?();
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  pvVar16 = (obj->fields)._._._.m_CachedPtr;
                  if (pvVar16 == (void *)0x0) {
                    stack0xffffffffffffffc0 = &UNK_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  pcVar15 = pcRam_?;
                  if (pcRam_? == (code *)0x0) {
                    stack0xffffffffffffffc0 = &UNK_?;
                    pcVar15 = (code *)FUN_?(&UNK_?);
                    if (pcVar15 == (code *)0x0) {
                      stack0xffffffffffffffc0 = &UNK_?;
                      uVar17 = func_?(&UNK_?);
                      stack0xffffffffffffffc0 = &UNK_?;
                      FUN_?(uVar17,0);
                      pcVar15 = (code *)swi(3);
                      (*pcVar15)();
                      return;
                    }
                  }
                  pcRam_? = pcVar15;
                  stack0xffffffffffffffc0 = &UNK_?;
                  (*pcRam_?)(pvVar16,auStack_14);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnColorPressed(String) */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
     SettingsUI_OnColorPressed(SettingsUI *this,String *colorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorA);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorG);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (this->fields).itemData;
  hashtable_00 = (Dictionary_2_System_Object_System_Object_ *)
                 (*(this->klass->vtable).get_DefaultItemData.methodPtr)
                           (this,(this->klass->vtable).get_DefaultItemData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  CStack_1.r = 0.0;
  CStack_1.g = 0.0;
  CStack_1.b = 0.0;
  CStack_1.a = 0.0;
  pCVar2 = Extensions::Extensions_GetColorOrDefault
                     (&CStack_3,hashtable_00,colorKey,&CStack_1,(MethodInfo *)0x0);
  CStack_1.r = pCVar2->r;
  CStack_1.g = pCVar2->g;
  CStack_1.b = pCVar2->b;
  CStack_1.a = pCVar2->a;
  pCVar2 = Extensions::Extensions_GetColorOrDefault
                     (&CStack_3,hashtable,colorKey,&CStack_1,(MethodInfo *)0x0);
  maxValue = _UNK_?;
  pSVar4 = (this->fields).colorR;
  value = pCVar2->g;
  uVar5._0_4_ = pCVar2->r;
  uVar5._4_4_ = pCVar2->g;
  value_00 = pCVar2->b;
  value_01 = pCVar2->a;
  uVar6._0_4_ = pCVar2->b;
  uVar6._4_4_ = pCVar2->a;
  if (pSVar4 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_Initialize
              (pSVar4,StringLiteral_colorR,pCVar2->r,0.0,_UNK_?,(MethodInfo *)0x0);
    pSVar4 = (this->fields).colorG;
    if (pSVar4 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar4,StringLiteral_colorG,value,0.0,maxValue,(MethodInfo *)0x0);
      pSVar4 = (this->fields).colorB;
      if (pSVar4 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar4,StringLiteral_colorB,value_00,0.0,maxValue,(MethodInfo *)0x0);
        pSVar4 = (this->fields).colorA;
        if (pSVar4 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar4,StringLiteral_colorA,value_01,0.0,maxValue,(MethodInfo *)0x0);
          pIVar7 = (this->fields).colorPickerPreview;
          if (pIVar7 != (Image *)0x0) {
            CStack_1._0_8_ = uVar5;
            CStack_1._8_8_ = uVar6;
            (*(pIVar7->klass->vtable).set_color.methodPtr)
                      (pIVar7,&CStack_1,(pIVar7->klass->vtable).set_color.method);
            key = Extensions::Extensions_AddSpacesToSentence(colorKey,(MethodInfo *)0x0);
            pTVar8 = (this->fields).colorText;
            TM::TM__(key,(MethodInfo *)0x0);
            if (pTVar8 != (Text *)0x0) {
              (*(pTVar8->klass->vtable).set_text.methodPtr)(pTVar8);
              bVar9 = iRam_? != 0;
              (this->fields).editingColorKey = colorKey;
              if (bVar9) {
                uVar10 = (uint)((ulonglong)&(this->fields).editingColorKey >> 0xc);
                uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                do {
                  uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                  puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                  LOCK();
                  bVar9 = uVar12 == *puVar13;
                  if (bVar9) {
                    *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar9);
              }
              pGVar14 = (this->fields).content;
              if (pGVar14 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar14,0,(MethodInfo *)0x0);
                pGVar14 = (this->fields).colorPicker;
                if (pGVar14 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar14,1,(MethodInfo *)0x0);
                  obj = (this->fields).canvas;
                  auStack_15[0] =
                       (*(this->klass->vtable).get_ColorEditingCanvasSize.methodPtr)
                                 (this,(this->klass->vtable).get_ColorEditingCanvasSize.method);
                  if (obj != (RectTransform *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                    ,auStack_15[0],0);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (obj == (RectTransform *)0x0) {
                      FUN_?();
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                    pvVar17 = (obj->fields)._._._.m_CachedPtr;
                    if (pvVar17 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                    pcVar16 = pcRam_?;
                    if (pcRam_? == (code *)0x0) {
                      pcVar16 = (code *)FUN_?(&UNK_?);
                      if (pcVar16 == (code *)0x0) {
                        uVar5 = func_?(&UNK_?);
                        FUN_?(uVar5,0);
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                    }
                    pcRam_? = pcVar16;
                    (*pcRam_?)(pvVar17,auStack_15);
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
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
     SettingsUI_OnSettingChanged(SettingsUI *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == (String *)0x0) {
    return;
  }
  if ((key->fields)._stringLength == 0) {
    return;
  }
  iVar1 = (key->fields)._stringLength;
  if (5 < iVar1) {
    if (iVar1 + -5 < 0) {
      uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
      this_02 = (ArgumentOutOfRangeException *)func_?(uVar2);
      pSVar3 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
      paramName = (String *)func_?(&StringLiteral_length);
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                (this_02,paramName,pSVar3,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__System__String__Substring_int__int_);
      FUN_?(this_02,uVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    method = (MethodInfo *)0x0;
    pSVar3 = mscorlib.dll::System::String::String_InternalSubString(key,0,5,(MethodInfo *)0x0);
    if (pSVar3 == StringLiteral_color) {
code_?:
      pSVar5 = (this->fields).colorR;
      pIVar6 = (this->fields).colorPickerPreview;
      if ((pSVar5 != (SettingsSlider *)0x0) &&
         (pSVar7 = (pSVar5->fields).slider, pSVar7 != (Slider *)0x0)) {
        uVar8 = (*(pSVar7->klass->vtable).get_value.methodPtr)
                          (pSVar7,(pSVar7->klass->vtable).get_value.method);
        pSVar5 = (this->fields).colorG;
        if ((pSVar5 != (SettingsSlider *)0x0) &&
           (pSVar7 = (pSVar5->fields).slider, pSVar7 != (Slider *)0x0)) {
          uVar9 = (*(pSVar7->klass->vtable).get_value.methodPtr)
                             (pSVar7,(pSVar7->klass->vtable).get_value.method);
          pSVar5 = (this->fields).colorB;
          if ((pSVar5 != (SettingsSlider *)0x0) &&
             (pSVar7 = (pSVar5->fields).slider, pSVar7 != (Slider *)0x0)) {
            uStack_10 = (*(pSVar7->klass->vtable).get_value.methodPtr)
                                  (pSVar7,(pSVar7->klass->vtable).get_value.method);
            pSVar5 = (this->fields).colorA;
            if ((pSVar5 != (SettingsSlider *)0x0) &&
               ((pSVar7 = (pSVar5->fields).slider, pSVar7 != (Slider *)0x0 &&
                (uStack_11 = (*(pSVar7->klass->vtable).get_value.methodPtr)
                                       (pSVar7,(pSVar7->klass->vtable).get_value.method),
                pIVar6 != (Image *)0x0)))) {
              uStack_12 = uVar8;
              uStack_13 = uVar9;
              (*(pIVar6->klass->vtable).set_color.methodPtr)
                        (pIVar6,&uStack_12,(pIVar6->klass->vtable).set_color.method);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if (((pSVar3 != (String *)0x0) && (StringLiteral_color != (String *)0x0)) &&
       ((pSVar3->fields)._stringLength == (StringLiteral_color->fields)._stringLength)) {
      method = (MethodInfo *)0x0;
      bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar3->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_color->fields)._firstChar,
                         (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar14 != 0) goto code_?;
    }
  }
  this_00 = (this->fields).itemData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,(Object *)key,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_01 = (this->fields).settingsBase;
    if (this_01 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged
                (this_01,StringLiteral_itemData,(Object *)(this->fields).itemData,(MethodInfo *)0x0)
      ;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateColorPickerPreview() */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
     SettingsUI_UpdateColorPickerPreview(SettingsUI *this,MethodInfo *method)

{
  pIVar1 = (this->fields).colorPickerPreview;
  pSVar2 = (this->fields).colorR;
  if ((pSVar2 != (SettingsSlider *)0x0) &&
     (pSVar3 = (pSVar2->fields).slider, pSVar3 != (Slider *)0x0)) {
    uVar4 = (*(pSVar3->klass->vtable).get_value.methodPtr)
                      (pSVar3,(pSVar3->klass->vtable).get_value.method);
    pSVar2 = (this->fields).colorG;
    if ((pSVar2 != (SettingsSlider *)0x0) &&
       (pSVar3 = (pSVar2->fields).slider, pSVar3 != (Slider *)0x0)) {
      uVar5 = (*(pSVar3->klass->vtable).get_value.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable).get_value.method);
      pSVar2 = (this->fields).colorB;
      if ((pSVar2 != (SettingsSlider *)0x0) &&
         (pSVar3 = (pSVar2->fields).slider, pSVar3 != (Slider *)0x0)) {
        uStack_6 = (*(pSVar3->klass->vtable).get_value.methodPtr)
                              (pSVar3,(pSVar3->klass->vtable).get_value.method);
        pSVar2 = (this->fields).colorA;
        if ((pSVar2 != (SettingsSlider *)0x0) &&
           (pSVar3 = (pSVar2->fields).slider, pSVar3 != (Slider *)0x0)) {
          uStack_7 = (*(pSVar3->klass->vtable).get_value.methodPtr)
                                (pSVar3,(pSVar3->klass->vtable).get_value.method);
          if (pIVar1 != (Image *)0x0) {
            uStack_8 = uVar4;
            uStack_9 = uVar5;
            (*(pIVar1->klass->vtable).set_color.methodPtr)
                      (pIVar1,&uStack_8,(pIVar1->klass->vtable).set_color.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* SettingsUI() */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
     SettingsUI__ctor(SettingsUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).editingColorKey = ::StringLiteral__;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).editingColorKey >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar7 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar8 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar7;
  if (lVar8 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar8 = lRam_?;
  }
  else {
    do {
      uVar2 = (uint)ppMVar9;
      LOCK();
      bVar1 = uVar2 != uRam_?;
      uVar10 = uVar2;
      uVar11 = uVar2 + 1;
      if (bVar1) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar1) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar10, uVar2 = uVar10, uVar10 != 2)
            );
    while (uVar2 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar2 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar8;
  puVar12 = &(pOVar6->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar12 == 1;
  if (bVar1) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar2 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar6->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar13 == 1;
  if (bVar1) {
    *puVar13 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar2 = GetCurrentThreadId();
    psVar14 = &(pOVar6->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar2 == *psVar14;
    if (bVar1) {
      *psVar14 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar6->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar12 == 1;
      if (bVar1) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar8._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
      lVar8._4_4_ = (pOVar6->_1).cctor_started;
      if (lVar8 == 0) {
        (pOVar6->_1).initializationExceptionGCHandle = 0;
        (pOVar6->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar8 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar6->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar2 = GetCurrentThreadId();
    LOCK();
    (pOVar6->_1).cctor_thread = (ulonglong)uVar2;
    UNLOCK();
    LOCK();
    (pOVar6->_1).cctor_finished_or_no_cctor = 1;
    uVar2 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar6->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar6);
      ppMVar9 = ppMVar7;
      pIVar16 = (Il2CppClass *)pOVar6;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar9 = pIVar16->methods;
            pMVar17 = *ppMVar9;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar7;
                while (ppMVar19 = ppMVar18 + 0x3052af36,
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *(char *)ppMVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar9 = ppMVar7;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar6->_1).cctor_thread = 0;
    uVar5 = _UNK_?;
    uVar20 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar6->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = _UNK_?;
    uStack_23 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar6->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_23 < 0x10) {
code_?:
      lVar8 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_22 = uVar20;
      uStack_23 = uVar5;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar8 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar8;
        if (iRam_? != 0) {
          uVar2 = (uint)(lVar15 + 0x28U >> 0xc);
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
      }
      FUN_?(pOVar6,lVar15);
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar20 = _UNK_?;
      uVar5 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar20._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar20._4_4_ = (pOVar6->_1).cctor_started;
  uVar20 = FUN_?(uVar20);
  FUN_?(uVar20,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Vector2 get_ColorEditingCanvasSize() */

Vector2 Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
        SettingsUI_get_ColorEditingCanvasSize(SettingsUI *this,MethodInfo *method)

{
  VVar1.y = _UNK_?;
  VVar1.x = _UNK_?;
  return VVar1;
}


/* Vector2 get_NormalEditingCanvasSize() */

Vector2 Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
        SettingsUI_get_NormalEditingCanvasSize(SettingsUI *this,MethodInfo *method)

{
  VVar1.y = _UNK_?;
  VVar1.x = _UNK_?;
  return VVar1;
}

