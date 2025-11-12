
/* Void ChangeColor(Color) */

void Assembly-CSharp.dll::ThemeColorPickerRGB::ThemeColorPickerRGB_ChangeColor
               (ThemeColorPickerRGB *this,Color *c,MethodInfo *method)

{
  pRVar1 = (this->fields).previewImage;
  if (pRVar1 != (RawImage *)0x0) {
    fStack_2 = c->r;
    fStack_3 = c->g;
    fStack_4 = c->b;
    fStack_5 = c->a;
    (*(pRVar1->klass->vtable).set_color.methodPtr)
              (pRVar1,&fStack_2,(pRVar1->klass->vtable).set_color.method);
    pAVar6 = (this->fields).onChange;
    if (pAVar6 != (Action_1_UnityEngine_Color_ *)0x0) {
      fStack_2 = c->r;
      fStack_3 = c->g;
      fStack_4 = c->b;
      fStack_5 = c->a;
      (*(pAVar6->fields)._._.invoke_impl)
                ((pAVar6->fields)._._.method_code,&fStack_2,(pAVar6->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(ColorAttribute, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeColorPickerRGB::ThemeColorPickerRGB_Initialize
               (ThemeColorPickerRGB *this,ColorAttribute *attrib,
               Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__get_Name__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeAttributes__ThemeAttribute<UnityEngine::Color>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeColorPickerRGB____c___Initialize_b__7_0_UnityEngine__Color_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeColorPickerRGB____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Red);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Blue);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Green);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((attrib != (ColorAttribute *)0x0) && (pTVar1 = (this->fields).label, pTVar1 != (Text *)0x0)) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,(attrib->fields)._.name,(pTVar1->klass->vtable).set_text.method);
    if (*(int *)&(TypeInfo__ThemeColorPickerRGB____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar2 = TypeInfo__ThemeColorPickerRGB____c->static_fields->__9__7_0;
    if (pAVar2 == (Action_1_UnityEngine_Color_ *)0x0) {
      if (*(int *)&(TypeInfo__ThemeColorPickerRGB____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar3 = TypeInfo__ThemeColorPickerRGB____c->static_fields->__9;
      pAVar2 = (Action_1_UnityEngine_Color_ *)
               FUN_?(TypeInfo__System__Action<UnityEngine::Color>);
      FUN_?(pAVar2,pTVar3,
                    MethodInfo__ThemeColorPickerRGB____c___Initialize_b__7_0_UnityEngine__Color_);
      TypeInfo__ThemeColorPickerRGB____c->static_fields->__9__7_0 = pAVar2;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&TypeInfo__ThemeColorPickerRGB____c->static_fields->__9__7_0 >>
                       0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    bVar8 = iRam_? != 0;
    (this->fields).onChange = pAVar2;
    if (bVar8) {
      uVar4 = (uint)((ulonglong)&(this->fields).onChange >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    maxValue = _UNK_?;
    pSVar9 = (this->fields).sliderR;
    if (pSVar9 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar9,StringLiteral_Red,(attrib->fields)._._.value.r,0.0,_UNK_?,
                 (MethodInfo *)0x0);
      pSVar9 = (this->fields).sliderG;
      if (pSVar9 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar9,StringLiteral_Green,(attrib->fields)._._.value.g,0.0,maxValue,
                   (MethodInfo *)0x0);
        pSVar9 = (this->fields).sliderB;
        if (pSVar9 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar9,StringLiteral_Blue,(attrib->fields)._._.value.b,0.0,maxValue,
                     (MethodInfo *)0x0);
          pRVar10 = (this->fields).previewImage;
          if (pRVar10 != (RawImage *)0x0) {
            fStack_11 = (attrib->fields)._._.value.r;
            fStack_12 = (attrib->fields)._._.value.g;
            fStack_13 = (attrib->fields)._._.value.b;
            fStack_14 = (attrib->fields)._._.value.a;
            (*(pRVar10->klass->vtable).set_color.methodPtr)
                      (pRVar10,&fStack_11,(pRVar10->klass->vtable).set_color.method);
            bVar8 = iRam_? != 0;
            (this->fields).onChange = onChange;
            if (bVar8) {
              uVar4 = (uint)((ulonglong)&(this->fields).onChange >> 0xc);
              uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
              do {
                uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                LOCK();
                bVar8 = uVar6 == *puVar7;
                if (bVar8) {
                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
            return;
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


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ThemeColorPickerRGB::ThemeColorPickerRGB_OnSettingChanged
               (ThemeColorPickerRGB *this,String *key,Object *value,MethodInfo *method)

{
  pSVar1 = (this->fields).sliderR;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
    uVar3 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                      (pSVar2,(pSVar2->klass->vtable).get_value.method);
    pSVar1 = (this->fields).sliderG;
    if ((pSVar1 != (SettingsSlider *)0x0) &&
       (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
      uVar4 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable).get_value.method);
      pSVar1 = (this->fields).sliderB;
      if ((pSVar1 != (SettingsSlider *)0x0) &&
         (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
        uVar5 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable).get_value.method);
        pRVar6 = (this->fields).previewImage;
        if (pRVar6 != (RawImage *)0x0) {
          uStack_7 = 0x3f800000;
          uStack_8 = uVar3;
          uStack_9 = uVar4;
          uStack_10 = uVar5;
          (*(pRVar6->klass->vtable).set_color.methodPtr)
                    (pRVar6,&uStack_8,(pRVar6->klass->vtable).set_color.method);
          pAVar11 = (this->fields).onChange;
          uStack_7 = 0x3f800000;
          uStack_8 = uVar3;
          uStack_9 = uVar4;
          uStack_10 = uVar5;
          if (pAVar11 != (Action_1_UnityEngine_Color_ *)0x0) {
            uStack_7 = 0x3f800000;
            (*(pAVar11->fields)._._.invoke_impl)
                      ((pAVar11->fields)._._.method_code,&uStack_8,(pAVar11->fields)._._.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ThemeColorPickerRGB::ThemeColorPickerRGB_Reset
               (ThemeColorPickerRGB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SettingsSlider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SettingsSlider>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     ((Component *)this,
                      SettingsSlider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SettingsSlider>______
                     );
  if (pOVar1 == (Object__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)pOVar1->max_length != 0) {
    (this->fields).sliderR = (SettingsSlider *)pOVar1->vector[0];
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields).sliderR >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    iVar8 = iRam_?;
    if (1 < (uint)pOVar1->max_length) {
      (this->fields).sliderG = (SettingsSlider *)pOVar1->vector[1];
      if (iVar8 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).sliderG >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
          iVar8 = iRam_?;
        } while (!bVar7);
      }
      if (2 < (uint)pOVar1->max_length) {
        (this->fields).sliderB = (SettingsSlider *)pOVar1->vector[2];
        if (iVar8 != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields).sliderB >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

