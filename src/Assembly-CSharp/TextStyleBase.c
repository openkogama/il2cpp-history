
/* Void Awake() */

void Assembly-CSharp.dll::TextStyleBase::TextStyleBase_Awake(TextStyleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (this->fields).text;
  key = (this->fields).textStyle;
  colorStyle = (this->fields).colorStyle;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<TextStyle,_Styles::TextStyleDef>__get_Item_TextStyle_
                  ,key,colorStyle,0,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = Styles::Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__Styles);
  }
  this_00 = TypeInfo__Styles->static_fields->textStylesDictionary;
  if (((this_00 != (Dictionary_2_TextStyle_Styles_TextStyleDef_ *)0x0) &&
      (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                           MethodInfo__System__Collections__Generic__Dictionary<TextStyle,_Styles::TextStyleDef>__get_Item_TextStyle_
                          ), pOVar2 != (Object *)0x0)) && (this_01 != (Text *)0x0)) {
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_font
              (this_01,(Font *)pOVar2[1].monitor,(MethodInfo *)0x0);
    pFVar3 = (this_01->fields).m_FontData;
    if (pFVar3 != (FontData *)0x0) {
      if ((pFVar3->fields).m_FontSize != *(int *)&pOVar2[2].klass) {
        (pFVar3->fields).m_FontSize = *(int *)&pOVar2[2].klass;
        (*(this_01->klass->vtable).SetVerticesDirty.methodPtr)
                  (this_01,(this_01->klass->vtable).SetVerticesDirty.method);
        (*(this_01->klass->vtable).SetLayoutDirty.methodPtr)
                  (this_01,(this_01->klass->vtable).SetLayoutDirty.method);
      }
      pFVar3 = (this_01->fields).m_FontData;
      if (pFVar3 != (FontData *)0x0) {
        iVar4 = *(int *)((longlong)&pOVar2[2].klass + 4);
        if ((pFVar3->fields).m_FontStyle != iVar4) {
          (pFVar3->fields).m_FontStyle = iVar4;
          (*(this_01->klass->vtable).SetVerticesDirty.methodPtr)
                    (this_01,(this_01->klass->vtable).SetVerticesDirty.method);
          (*(this_01->klass->vtable).SetLayoutDirty.methodPtr)
                    (this_01,(this_01->klass->vtable).SetLayoutDirty.method);
        }
        Styles::Styles_SetStyle_2((Graphic *)this_01,colorStyle,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::TextStyleBase::TextStyleBase_OnValidate
               (TextStyleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)();
  if (cVar3 == '\0') {
    pTVar4 = (this->fields).text;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pTVar4 != (Text *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((void *)(pTVar4->fields)._._._._._._._ != (void *)0x0) {
        pTVar4 = (this->fields).text;
        textStyle = (this->fields).textStyle;
        colorStyle = (this->fields).colorStyle;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        Styles::Styles_SetStyle_1(pTVar4,textStyle,colorStyle,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::TextStyleBase::TextStyleBase_Reset(TextStyleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             ((Component *)this,
                              UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                             );
  bVar2 = iRam_? != 0;
  (this->fields).text = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).text >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pTVar1 = (this->fields).text;
  key = (this->fields).textStyle;
  colorStyle = (this->fields).colorStyle;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<TextStyle,_Styles::TextStyleDef>__get_Item_TextStyle_
                  ,key,colorStyle,0,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar7 = Styles::Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar7 != 0) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__Styles);
    }
    this_00 = TypeInfo__Styles->static_fields->textStylesDictionary;
    if (((this_00 != (Dictionary_2_TextStyle_Styles_TextStyleDef_ *)0x0) &&
        (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                             MethodInfo__System__Collections__Generic__Dictionary<TextStyle,_Styles::TextStyleDef>__get_Item_TextStyle_
                            ), pOVar8 != (Object *)0x0)) && (pTVar1 != (Text *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_font
                (pTVar1,(Font *)pOVar8[1].monitor,(MethodInfo *)0x0);
      pFVar9 = (pTVar1->fields).m_FontData;
      if (pFVar9 != (FontData *)0x0) {
        if ((pFVar9->fields).m_FontSize != *(int *)&pOVar8[2].klass) {
          (pFVar9->fields).m_FontSize = *(int *)&pOVar8[2].klass;
          (*(pTVar1->klass->vtable).SetVerticesDirty.methodPtr)
                    (pTVar1,(pTVar1->klass->vtable).SetVerticesDirty.method);
          (*(pTVar1->klass->vtable).SetLayoutDirty.methodPtr)
                    (pTVar1,(pTVar1->klass->vtable).SetLayoutDirty.method);
        }
        pFVar9 = (pTVar1->fields).m_FontData;
        if (pFVar9 != (FontData *)0x0) {
          iVar10 = *(int *)((longlong)&pOVar8[2].klass + 4);
          if ((pFVar9->fields).m_FontStyle != iVar10) {
            (pFVar9->fields).m_FontStyle = iVar10;
            (*(pTVar1->klass->vtable).SetVerticesDirty.methodPtr)
                      (pTVar1,(pTVar1->klass->vtable).SetVerticesDirty.method);
            (*(pTVar1->klass->vtable).SetLayoutDirty.methodPtr)
                      (pTVar1,(pTVar1->klass->vtable).SetLayoutDirty.method);
          }
          Styles::Styles_SetStyle_2((Graphic *)pTVar1,colorStyle,(MethodInfo *)0x0);
          return;
        }
      }
    }
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  return;
}

