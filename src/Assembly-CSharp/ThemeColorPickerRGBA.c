
/* Void Initialize(ColorAttribute, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeColorPickerRGBA::ThemeColorPickerRGBA_Initialize
               (ThemeColorPickerRGBA *this,ColorAttribute *attrib,
               Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeAttributes__ThemeAttribute<UnityEngine::Color>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeColorPickerRGBA____c___Initialize_b__2_0_UnityEngine__Color_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeColorPickerRGBA____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Alpha);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ThemeColorPickerRGB::ThemeColorPickerRGB_Initialize
            ((ThemeColorPickerRGB *)this,attrib,onChange,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ThemeColorPickerRGBA____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar1 = TypeInfo__ThemeColorPickerRGBA____c->static_fields->__9__2_0;
  if (pAVar1 == (Action_1_UnityEngine_Color_ *)0x0) {
    if (*(int *)&(TypeInfo__ThemeColorPickerRGBA____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pTVar2 = TypeInfo__ThemeColorPickerRGBA____c->static_fields->__9;
    pAVar1 = (Action_1_UnityEngine_Color_ *)
             FUN_?(TypeInfo__System__Action<UnityEngine::Color>);
    FUN_?(pAVar1,pTVar2,
                  MethodInfo__ThemeColorPickerRGBA____c___Initialize_b__2_0_UnityEngine__Color_);
    TypeInfo__ThemeColorPickerRGBA____c->static_fields->__9__2_0 = pAVar1;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__ThemeColorPickerRGBA____c->static_fields->__9__2_0 >> 0xc
                    );
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (this != (ThemeColorPickerRGBA *)0x0) {
    bVar7 = iRam_? != 0;
    (this->fields)._.onChange = pAVar1;
    if (bVar7) {
      uVar3 = (uint)((ulonglong)&(this->fields)._.onChange >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    this_00 = (this->fields).sliderA;
    if ((attrib != (ColorAttribute *)0x0) && (this_00 != (SettingsSlider *)0x0)) {
      SettingsSlider::SettingsSlider_Initialize
                (this_00,StringLiteral_Alpha,(attrib->fields)._._.value.a,0.0,_UNK_?,
                 (MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields)._.onChange = onChange;
      if (bVar7) {
        uVar3 = (uint)((ulonglong)&(this->fields)._.onChange >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
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
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ThemeColorPickerRGBA::ThemeColorPickerRGBA_OnSettingChanged
               (ThemeColorPickerRGBA *this,String *key,Object *value,MethodInfo *method)

{
  pSVar1 = (this->fields)._.sliderR;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
    uVar3 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                      (pSVar2,(pSVar2->klass->vtable).get_value.method);
    pSVar1 = (this->fields)._.sliderG;
    if ((pSVar1 != (SettingsSlider *)0x0) &&
       (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
      uVar4 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable).get_value.method);
      pSVar1 = (this->fields)._.sliderB;
      if ((pSVar1 != (SettingsSlider *)0x0) &&
         (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
        uVar5 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable).get_value.method);
        pSVar1 = (this->fields).sliderA;
        if ((pSVar1 != (SettingsSlider *)0x0) &&
           (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
          uVar6 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                            (pSVar2,(pSVar2->klass->vtable).get_value.method);
          pRVar7 = (this->fields)._.previewImage;
          if (pRVar7 != (RawImage *)0x0) {
            uStack_8 = uVar3;
            uStack_9 = uVar4;
            uStack_10 = uVar5;
            uStack_11 = uVar6;
            (*(pRVar7->klass->vtable).set_color.methodPtr)
                      (pRVar7,&uStack_8,(pRVar7->klass->vtable).set_color.method);
            pAVar12 = (this->fields)._.onChange;
            uStack_8 = uVar3;
            uStack_9 = uVar4;
            uStack_10 = uVar5;
            uStack_11 = uVar6;
            if (pAVar12 != (Action_1_UnityEngine_Color_ *)0x0) {
              (*(pAVar12->fields)._._.invoke_impl)
                        ((pAVar12->fields)._._.method_code,&uStack_8,(pAVar12->fields)._._.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ThemeColorPickerRGBA::ThemeColorPickerRGBA_Reset
               (ThemeColorPickerRGBA *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SettingsSlider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SettingsSlider>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)pOVar1->max_length != 0) {
    (this->fields)._.sliderR = (SettingsSlider *)pOVar1->vector[0];
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._.sliderR >> 0xc);
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
      (this->fields)._.sliderG = (SettingsSlider *)pOVar1->vector[1];
      if (iVar8 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields)._.sliderG >> 0xc);
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
        (this->fields)._.sliderB = (SettingsSlider *)pOVar1->vector[2];
        if (iVar8 != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields)._.sliderB >> 0xc);
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
        pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                 Component_GetComponentsInChildren
                           ((Component *)this,
                            SettingsSlider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SettingsSlider>______
                           );
        if (pOVar1 == (Object__Array *)0x0) goto code_?;
        if (3 < (uint)pOVar1->max_length) {
          bVar7 = iRam_? != 0;
          (this->fields).sliderA = (SettingsSlider *)pOVar1->vector[3];
          if (bVar7) {
            uVar3 = (uint)((ulonglong)&(this->fields).sliderA >> 0xc);
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
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

