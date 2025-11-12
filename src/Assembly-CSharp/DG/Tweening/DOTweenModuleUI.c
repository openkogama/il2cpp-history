
/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOAnchorMax(RectTransform, Vector2, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOAnchorMax
          (RectTransform *target,Vector2 endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass20_0___DOAnchorMax_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass20_0___DOAnchorMax_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass20_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass20_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass20_0___DOAnchorMax_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass20_0___DOAnchorMax_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOAnchorMin(RectTransform, Vector2, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOAnchorMin
          (RectTransform *target,Vector2 endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass21_0___DOAnchorMin_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass21_0___DOAnchorMin_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass21_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass21_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass21_0___DOAnchorMin_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass21_0___DOAnchorMin_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOAnchorPos(RectTransform, Vector2, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOAnchorPos
          (RectTransform *target,Vector2 endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass13_0___DOAnchorPos_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass13_0___DOAnchorPos_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass13_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass13_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass13_0___DOAnchorPos_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass13_0___DOAnchorPos_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions]
   DOAnchorPos3D(RectTransform, Vector3, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOAnchorPos3D
          (RectTransform *target,Vector3 *endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass16_0___DOAnchorPos3D_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass16_0___DOAnchorPos3D_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass16_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass16_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass16_0___DOAnchorPos3D_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass16_0___DOAnchorPos3D_b__1_UnityEngine__Vector3_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  aVStack_9[0].x = endValue->x;
  aVStack_9[0].y = endValue->y;
  aVStack_9[0].z = endValue->z;
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                     (getter,setter,aVStack_9,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions]
   DOAnchorPos3DX(RectTransform, Single, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOAnchorPos3DX
          (RectTransform *target,float endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass17_0___DOAnchorPos3DX_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass17_0___DOAnchorPos3DX_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass17_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass17_0___DOAnchorPos3DX_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass17_0___DOAnchorPos3DX_b__1_UnityEngine__Vector3_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  aVStack_9[0].z = 0.0;
  aVStack_9[0]._0_8_ = ZEXT48((uint)endValue);
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                     (getter,setter,aVStack_9,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.axisConstraint = 2;
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions]
   DOAnchorPos3DY(RectTransform, Single, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOAnchorPos3DY
          (RectTransform *target,float endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass18_0___DOAnchorPos3DY_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass18_0___DOAnchorPos3DY_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass18_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass18_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass18_0___DOAnchorPos3DY_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass18_0___DOAnchorPos3DY_b__1_UnityEngine__Vector3_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  aVStack_9[0].z = 0.0;
  aVStack_9[0]._0_8_ = (ulonglong)(uint)endValue << 0x20;
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                     (getter,setter,aVStack_9,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.axisConstraint = 4;
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions]
   DOAnchorPos3DZ(RectTransform, Single, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOAnchorPos3DZ
          (RectTransform *target,float endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass19_0___DOAnchorPos3DZ_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass19_0___DOAnchorPos3DZ_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass19_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass19_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass19_0___DOAnchorPos3DZ_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass19_0___DOAnchorPos3DZ_b__1_UnityEngine__Vector3_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  aVStack_9[0].x = 0.0;
  aVStack_9[0].y = 0.0;
  aVStack_9[0].z = endValue;
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                     (getter,setter,aVStack_9,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.axisConstraint = 8;
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOAnchorPosX(RectTransform, Single, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOAnchorPosX
          (RectTransform *target,float endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass14_0___DOAnchorPosX_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass14_0___DOAnchorPosX_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass14_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass14_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass14_0___DOAnchorPosX_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass14_0___DOAnchorPosX_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  endValue_00.y = 0.0;
  endValue_00.x = endValue;
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue_00,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.axisConstraint = 2;
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOAnchorPosY(RectTransform, Single, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOAnchorPosY
          (RectTransform *target,float endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass15_0___DOAnchorPosY_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass15_0___DOAnchorPosY_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass15_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass15_0___DOAnchorPosY_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass15_0___DOAnchorPosY_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,(Vector2)((ulonglong)(uint)endValue << 0x20),duration,
                      (MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.axisConstraint = 4;
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* Tweener DOBlendableColor(Graphic, Color, Single) */

Tweener * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOBlendableColor
                    (Graphic *target,Color *endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__Core__Extensions__Blendable<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass38_0___DOBlendableColor_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass38_0___DOBlendableColor_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass38_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass38_0);
  if (lVar1 == 0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (Tweener *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Graphic **)(lVar1 + 0x20) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x20U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  plVar9 = *(longlong **)(lVar1 + 0x20);
  fVar10 = endValue->r;
  fVar11 = endValue->g;
  fVar12 = endValue->b;
  fVar13 = endValue->a;
  if (plVar9 == (longlong *)0x0) goto code_?;
  pfVar14 = (float *)(**(code **)(*plVar9 + 0x298))
                               (&fStack_15,plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
  fStack_15 = fVar10 - *pfVar14;
  fStack_16 = fVar11 - pfVar14[1];
  uStack_17 = (undefined *)CONCAT44(fVar13 - pfVar14[3],fVar12 - pfVar14[2]);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  uVar18 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(uVar18,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass38_0___DOBlendableColor_b__0__
               );
  uVar19 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(uVar19,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass38_0___DOBlendableColor_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__DOGetter<UnityEngine::Color>__DG__Tweening__Core__DOSetter<UnityEngine::Color>__UnityEngine__Color__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = (Tweener *)FUN_?(uVar18,uVar19,&fStack_15,duration);
  if (pTVar3 == (Tweener *)0x0) goto code_?;
  (pTVar3->fields)._.isBlendable = 1;
  pOVar20 = *(Object_1 **)(lVar1 + 0x20);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Component,pOVar20,
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar3 == (Tweener *)0x0) {
    return (Tweener *)0x0;
  }
  if ((pTVar3->fields)._._active_k__BackingField == 0) {
    return pTVar3;
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->debugMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->useSafeMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->_fooDebugStoreTargetId == 0)
  goto code_?;
  this = (Object_1 *)0x0;
  if (pOVar20 != (Object_1 *)0x0) {
    bVar21 = (TypeInfo__UnityEngine__Component->_1).naturalAligment;
    if (((((Object__Class *)pOVar20->klass)->_1).naturalAligment < bVar21) ||
       (bVar4 = true,
       (((Object__Class *)pOVar20->klass)->_1).typeHierarchy[(ulonglong)bVar21 - 1] !=
       (Il2CppClass *)TypeInfo__UnityEngine__Component)) {
      bVar4 = false;
    }
    if (bVar4) {
      this = pOVar20;
    }
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Object_1 *)0x0) {
code_?:
    if (pOVar20 == (Object_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pTVar3 = (Tweener *)(*pcVar2)();
      return pTVar3;
    }
    pSVar22 = (String *)
              (*(((Object__Class *)pOVar20->klass)->vtable).ToString.methodPtr)
                        (pOVar20,(((Object__Class *)pOVar20->klass)->vtable).ToString.method);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this->fields).m_CachedPtr == (void *)0x0) goto code_?;
    pSVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                        (this,(MethodInfo *)0x0);
  }
  (pTVar3->fields)._.debugTargetId = pSVar22;
  func_?(&(pTVar3->fields)._.debugTargetId);
code_?:
  bVar4 = iRam_? != 0;
  (pTVar3->fields)._.target = (Object *)pOVar20;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pTVar3->fields)._.target >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
  }
  return pTVar3;
}


/* Tweener DOBlendableColor(Image, Color, Single) */

Tweener * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOBlendableColor_1
                    (Image *target,Color *endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__Core__Extensions__Blendable<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass39_0___DOBlendableColor_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass39_0___DOBlendableColor_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass39_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass39_0);
  if (lVar1 == 0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (Tweener *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Image **)(lVar1 + 0x20) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x20U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  plVar9 = *(longlong **)(lVar1 + 0x20);
  fVar10 = endValue->r;
  fVar11 = endValue->g;
  fVar12 = endValue->b;
  fVar13 = endValue->a;
  if (plVar9 == (longlong *)0x0) goto code_?;
  pfVar14 = (float *)(**(code **)(*plVar9 + 0x298))
                               (&fStack_15,plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
  fStack_15 = fVar10 - *pfVar14;
  fStack_16 = fVar11 - pfVar14[1];
  uStack_17 = (undefined *)CONCAT44(fVar13 - pfVar14[3],fVar12 - pfVar14[2]);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  uVar18 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(uVar18,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass39_0___DOBlendableColor_b__0__
               );
  uVar19 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(uVar19,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass39_0___DOBlendableColor_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__DOGetter<UnityEngine::Color>__DG__Tweening__Core__DOSetter<UnityEngine::Color>__UnityEngine__Color__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = (Tweener *)FUN_?(uVar18,uVar19,&fStack_15,duration);
  if (pTVar3 == (Tweener *)0x0) goto code_?;
  (pTVar3->fields)._.isBlendable = 1;
  pOVar20 = *(Object_1 **)(lVar1 + 0x20);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Component,pOVar20,
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar3 == (Tweener *)0x0) {
    return (Tweener *)0x0;
  }
  if ((pTVar3->fields)._._active_k__BackingField == 0) {
    return pTVar3;
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->debugMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->useSafeMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->_fooDebugStoreTargetId == 0)
  goto code_?;
  this = (Object_1 *)0x0;
  if (pOVar20 != (Object_1 *)0x0) {
    bVar21 = (TypeInfo__UnityEngine__Component->_1).naturalAligment;
    if (((((Object__Class *)pOVar20->klass)->_1).naturalAligment < bVar21) ||
       (bVar4 = true,
       (((Object__Class *)pOVar20->klass)->_1).typeHierarchy[(ulonglong)bVar21 - 1] !=
       (Il2CppClass *)TypeInfo__UnityEngine__Component)) {
      bVar4 = false;
    }
    if (bVar4) {
      this = pOVar20;
    }
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Object_1 *)0x0) {
code_?:
    if (pOVar20 == (Object_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pTVar3 = (Tweener *)(*pcVar2)();
      return pTVar3;
    }
    pSVar22 = (String *)
              (*(((Object__Class *)pOVar20->klass)->vtable).ToString.methodPtr)
                        (pOVar20,(((Object__Class *)pOVar20->klass)->vtable).ToString.method);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this->fields).m_CachedPtr == (void *)0x0) goto code_?;
    pSVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                        (this,(MethodInfo *)0x0);
  }
  (pTVar3->fields)._.debugTargetId = pSVar22;
  func_?(&(pTVar3->fields)._.debugTargetId);
code_?:
  bVar4 = iRam_? != 0;
  (pTVar3->fields)._.target = (Object *)pOVar20;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pTVar3->fields)._.target >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
  }
  return pTVar3;
}


/* Tweener DOBlendableColor(Text, Color, Single) */

Tweener * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOBlendableColor_2
                    (Text *target,Color *endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__Core__Extensions__Blendable<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass40_0___DOBlendableColor_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass40_0___DOBlendableColor_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass40_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass40_0);
  if (lVar1 == 0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (Tweener *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Text **)(lVar1 + 0x20) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x20U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  plVar9 = *(longlong **)(lVar1 + 0x20);
  fVar10 = endValue->r;
  fVar11 = endValue->g;
  fVar12 = endValue->b;
  fVar13 = endValue->a;
  if (plVar9 == (longlong *)0x0) goto code_?;
  pfVar14 = (float *)(**(code **)(*plVar9 + 0x298))
                               (&fStack_15,plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
  fStack_15 = fVar10 - *pfVar14;
  fStack_16 = fVar11 - pfVar14[1];
  uStack_17 = (undefined *)CONCAT44(fVar13 - pfVar14[3],fVar12 - pfVar14[2]);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  uVar18 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(uVar18,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass40_0___DOBlendableColor_b__0__
               );
  uVar19 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(uVar19,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass40_0___DOBlendableColor_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__DOGetter<UnityEngine::Color>__DG__Tweening__Core__DOSetter<UnityEngine::Color>__UnityEngine__Color__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = (Tweener *)FUN_?(uVar18,uVar19,&fStack_15,duration);
  if (pTVar3 == (Tweener *)0x0) goto code_?;
  (pTVar3->fields)._.isBlendable = 1;
  pOVar20 = *(Object_1 **)(lVar1 + 0x20);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Component,pOVar20,
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar3 == (Tweener *)0x0) {
    return (Tweener *)0x0;
  }
  if ((pTVar3->fields)._._active_k__BackingField == 0) {
    return pTVar3;
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->debugMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->useSafeMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->_fooDebugStoreTargetId == 0)
  goto code_?;
  this = (Object_1 *)0x0;
  if (pOVar20 != (Object_1 *)0x0) {
    bVar21 = (TypeInfo__UnityEngine__Component->_1).naturalAligment;
    if (((((Object__Class *)pOVar20->klass)->_1).naturalAligment < bVar21) ||
       (bVar4 = true,
       (((Object__Class *)pOVar20->klass)->_1).typeHierarchy[(ulonglong)bVar21 - 1] !=
       (Il2CppClass *)TypeInfo__UnityEngine__Component)) {
      bVar4 = false;
    }
    if (bVar4) {
      this = pOVar20;
    }
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Object_1 *)0x0) {
code_?:
    if (pOVar20 == (Object_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pTVar3 = (Tweener *)(*pcVar2)();
      return pTVar3;
    }
    pSVar22 = (String *)
              (*(((Object__Class *)pOVar20->klass)->vtable).ToString.methodPtr)
                        (pOVar20,(((Object__Class *)pOVar20->klass)->vtable).ToString.method);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this->fields).m_CachedPtr == (void *)0x0) goto code_?;
    pSVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                        (this,(MethodInfo *)0x0);
  }
  (pTVar3->fields)._.debugTargetId = pSVar22;
  func_?(&(pTVar3->fields)._.debugTargetId);
code_?:
  bVar4 = iRam_? != 0;
  (pTVar3->fields)._.target = (Object *)pOVar20;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pTVar3->fields)._.target >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
  }
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions]
   DOColor(Graphic, Color, Single) */

TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOColor
          (Graphic *target,Color *endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass1_0___DOColor_b__0__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass1_0___DOColor_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass1_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass1_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Graphic **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  uVar9 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(uVar9,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass1_0___DOColor_b__0__);
  uVar10 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(uVar10,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass1_0___DOColor_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__DOGetter<UnityEngine::Color>__DG__Tweening__Core__DOSetter<UnityEngine::Color>__UnityEngine__Color__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  fStack_11 = endValue->r;
  fStack_12 = endValue->g;
  fStack_13 = endValue->b;
  fStack_14 = endValue->a;
  pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
            *)FUN_?(uVar9,uVar10,&fStack_11,duration);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions]
   DOColor(Image, Color, Single) */

TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOColor_1
          (Image *target,Color *endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass3_0___DOColor_b__0__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass3_0___DOColor_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass3_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Image **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  uVar9 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(uVar9,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass3_0___DOColor_b__0__);
  uVar10 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(uVar10,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass3_0___DOColor_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__DOGetter<UnityEngine::Color>__DG__Tweening__Core__DOSetter<UnityEngine::Color>__UnityEngine__Color__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  fStack_11 = endValue->r;
  fStack_12 = endValue->g;
  fStack_13 = endValue->b;
  fStack_14 = endValue->a;
  pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
            *)FUN_?(uVar9,uVar10,&fStack_11,duration);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions]
   DOColor(Outline, Color, Single) */

TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOColor_2
          (Outline *target,Color *endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass10_0___DOColor_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass10_0___DOColor_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass10_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Outline **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  uVar9 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(uVar9,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass10_0___DOColor_b__0__);
  uVar10 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(uVar10,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass10_0___DOColor_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__DOGetter<UnityEngine::Color>__DG__Tweening__Core__DOSetter<UnityEngine::Color>__UnityEngine__Color__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  fStack_11 = endValue->r;
  fStack_12 = endValue->g;
  fStack_13 = endValue->b;
  fStack_14 = endValue->a;
  pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
            *)FUN_?(uVar9,uVar10,&fStack_11,duration);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions]
   DOColor(Text, Color, Single) */

TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOColor_3
          (Text *target,Color *endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass34_0___DOColor_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass34_0___DOColor_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass34_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass34_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Text **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  uVar9 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(uVar9,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass34_0___DOColor_b__0__);
  uVar10 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(uVar10,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass34_0___DOColor_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__DOGetter<UnityEngine::Color>__DG__Tweening__Core__DOSetter<UnityEngine::Color>__UnityEngine__Color__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  fStack_11 = endValue->r;
  fStack_12 = endValue->g;
  fStack_13 = endValue->b;
  fStack_14 = endValue->a;
  pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
            *)FUN_?(uVar9,uVar10,&fStack_11,duration);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions] DOCounter(Text,
   Int32, Int32, Single, Boolean, CultureInfo) */

TweenerCore_3_System_Int32_System_Int32_DG_Tweening_Plugins_Options_NoOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOCounter
          (Text *target,int32_t fromValue,int32_t endValue,float duration,bool addThousandsSeparator
          ,CultureInfo *culture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_>_DG__Tweening__Core__TweenerCore<int,_int,_DG::Tweening::Plugins::Options::NoOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass35_0___DOCounter_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass35_0___DOCounter_b__1_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass35_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass35_0);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_System_Int32_System_Int32_DG_Tweening_Plugins_Options_NoOptions_ *)
             (*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  pOVar1[1].monitor = (MonitorData *)target;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&pOVar1[1].monitor >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  *(bool *)&pOVar1[2].klass = addThousandsSeparator;
  *(int32_t *)&pOVar1[1].klass = fromValue;
  if (addThousandsSeparator == 0) {
    culture = (CultureInfo *)0x0;
  }
  else if (culture == (CultureInfo *)0x0) {
    if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
      FUN_?();
    }
    culture = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
  }
  bVar4 = iRam_? != 0;
  pOVar1[2].monitor = (MonitorData *)culture;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&pOVar1[2].monitor >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_System_Int32_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<int>);
  pMVar9 = MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass35_0___DOCounter_b__0__;
  bVar4 = iRam_? != 0;
  (getter->fields)._._.method_ptr =
       MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass35_0___DOCounter_b__0__->
       virtualMethodPointer;
  (getter->fields)._._.method = pMVar9;
  (getter->fields)._._.m_target = pOVar1;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(getter->fields)._._.m_target >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  uVar10 = pMVar9->parameters_count;
  (getter->fields)._._.method_code = getter;
  if (((pMVar9->flags & 0x10) == 0) || (uVar10 != 0)) {
    (getter->fields)._._.method_code = (getter->fields)._._.m_target;
    puVar11 = (getter->fields)._._.method_ptr;
  }
  else {
    puVar11 = &UNK_?;
  }
  (getter->fields)._._.invoke_impl = puVar11;
  (getter->fields)._._.extra_arg = FUN_?;
  setter = (DOSetter_1_System_Int32_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<int>);
  pMVar9 = MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass35_0___DOCounter_b__1_int_;
  bVar4 = iRam_? != 0;
  (setter->fields)._._.method_ptr =
       MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass35_0___DOCounter_b__1_int_->
       virtualMethodPointer;
  (setter->fields)._._.method = pMVar9;
  (setter->fields)._._.m_target = pOVar1;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(setter->fields)._._.m_target >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  uVar10 = pMVar9->parameters_count;
  (setter->fields)._._.method_code = setter;
  if (((pMVar9->flags & 0x10) == 0) || (uVar10 != 1)) {
    (setter->fields)._._.method_code = (setter->fields)._._.m_target;
    puVar11 = (setter->fields)._._.method_ptr;
  }
  else {
    puVar11 = &UNK_?;
  }
  (setter->fields)._._.invoke_impl = puVar11;
  (setter->fields)._._.extra_arg = FUN_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_DG__Tweening__Core__DOGetter<int>__DG__Tweening__Core__DOSetter<int>__int__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  DG__Tweening__Core__TweenerCore<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_DG__Tweening__Core__DOGetter<int>__DG__Tweening__Core__DOSetter<int>__int__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_
  ;
  if ((
      DG__Tweening__Core__TweenerCore<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_DG__Tweening__Core__DOGetter<int>__DG__Tweening__Core__DOSetter<int>__int__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  DOTween.dll::DG::Tweening::DOTween::DOTween_InitCheck((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_GetTweener_1
                     (((pMVar9->field7_0x38).rgctx_data)->method);
  bVar12 = DOTween.dll::DG::Tweening::Tweener::Tweener_Setup_1
                    (pTVar3,getter,setter,endValue,duration,
                     (ABSTweenPlugin_3_System_Int32_System_Int32_DG_Tweening_Plugins_Options_NoOptions_
                      *)0x0,(pMVar9->field7_0x38).rgctx_data[6].method);
  if (bVar12 == 0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_Despawn
              ((Tween *)pTVar3,1,(MethodInfo *)0x0);
    pTVar3 = (TweenerCore_3_System_Int32_System_Int32_DG_Tweening_Plugins_Options_NoOptions_ *)0x0;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,(Object *)pOVar1[1].monitor,
             DG__Tweening__Core__TweenerCore<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<int,_int,_DG::Tweening::Plugins::Options::NoOptions>_>_DG__Tweening__Core__TweenerCore<int,_int,_DG::Tweening::Plugins::Options::NoOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions]
   DOFade(CanvasGroup, Single, Single) */

TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOFade
          (CanvasGroup *target,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0___DOFade_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0___DOFade_b__1_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *)
             (*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(CanvasGroup **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>)
  ;
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0___DOFade_b__0__);
  setter = (DOSetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>)
  ;
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0___DOFade_b__1_float_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions]
   DOFade(Graphic, Single, Single) */

TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOFade_1
          (Graphic *target,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass2_0___DOFade_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass2_0___DOFade_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass2_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Graphic **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Color_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass2_0___DOFade_b__0__);
  setter = (DOSetter_1_UnityEngine_Color_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass2_0___DOFade_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_ToAlpha
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions]
   DOFade(Image, Single, Single) */

TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOFade_2
          (Image *target,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass4_0___DOFade_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass4_0___DOFade_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass4_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Image **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Color_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass4_0___DOFade_b__0__);
  setter = (DOSetter_1_UnityEngine_Color_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass4_0___DOFade_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_ToAlpha
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions]
   DOFade(Outline, Single, Single) */

TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOFade_3
          (Outline *target,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass11_0___DOFade_b__0__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass11_0___DOFade_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass11_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Outline **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Color_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass11_0___DOFade_b__0__);
  setter = (DOSetter_1_UnityEngine_Color_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass11_0___DOFade_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_ToAlpha
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions]
   DOFade(Text, Single, Single) */

TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOFade_4
          (Text *target,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass36_0___DOFade_b__0__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass36_0___DOFade_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass36_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Text **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Color_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass36_0___DOFade_b__0__);
  setter = (DOSetter_1_UnityEngine_Color_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass36_0___DOFade_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_ToAlpha
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions]
   DOFillAmount(Image, Single, Single) */

TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOFillAmount
          (Image *target,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass5_0___DOFillAmount_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass5_0___DOFillAmount_b__1_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass5_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *)
             (*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Image **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  endValue_00 = _UNK_?;
  if ((endValue <= _UNK_?) && (endValue_00 = endValue, endValue < 0.0)) {
    endValue_00 = 0.0;
  }
  getter = (DOGetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>)
  ;
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass5_0___DOFillAmount_b__0__
               );
  setter = (DOSetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>)
  ;
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass5_0___DOFillAmount_b__1_float_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To
                     (getter,setter,endValue_00,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOFlexibleSize(LayoutElement, Vector2, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOFlexibleSize
          (LayoutElement *target,Vector2 endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass7_0___DOFlexibleSize_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass7_0___DOFlexibleSize_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass7_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(LayoutElement **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass7_0___DOFlexibleSize_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass7_0___DOFlexibleSize_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* Sequence DOGradientColor(Image, Gradient, Single) */

Sequence *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOGradientColor
          (Image *target,Gradient *gradient,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetEase<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__DG__Tweening__Ease_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = DOTween.dll::DG::Tweening::DOTween::DOTween_Sequence((MethodInfo *)0x0);
  if (gradient != (Gradient *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_get_colorKeys
                       (gradient,(MethodInfo *)0x0);
    if (pGVar2 != (GradientColorKey__Array *)0x0) {
      iVar3 = (int)pGVar2->max_length;
      uVar4 = 0;
      if (0 < iVar3) {
        pGVar5 = pGVar2->vector;
        uVar6 = uVar4;
        do {
          uVar7 = (uint)uVar6;
          if ((uint)pGVar2->max_length <= uVar7) goto code_?;
          fStack_8 = pGVar5->time;
          uVar9._0_4_ = (pGVar5->color).r;
          uVar9._4_4_ = (pGVar5->color).g;
          uVar10._0_4_ = (pGVar5->color).b;
          uVar10._4_4_ = (pGVar5->color).a;
          if (uVar7 == 0) {
            CStack_11._0_8_ = uVar9;
            CStack_11._8_8_ = uVar10;
            if (0.0 < pGVar5->time) goto code_?;
            if (target == (Image *)0x0) goto code_?;
            (*(target->klass->vtable).set_color.methodPtr)(target);
          }
          else {
code_?:
            if (uVar7 == iVar3 - 1U) {
              if (pSVar1 == (Sequence *)0x0) goto code_?;
              if ((pSVar1->fields)._._active_k__BackingField == 0) {
                iVar12 = FUN_?();
                if (0 < iVar12) {
                  DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogInvalidTween
                            ((Tween *)pSVar1,(MethodInfo *)0x0);
                }
                fVar13 = duration - 0.0;
              }
              else {
                fVar13 = duration - (pSVar1->fields)._.duration;
              }
            }
            else {
              if (uVar7 == 0) {
                fVar13 = pGVar5->time;
              }
              else {
                CStack_11._0_8_ = uVar9;
                CStack_11._8_8_ = uVar10;
                if ((uint)pGVar2->max_length <= uVar7 - 1) {
code_?:
                  FUN_?();
                  pcVar14 = (code *)swi(3);
                  pSVar1 = (Sequence *)(*pcVar14)();
                  return pSVar1;
                }
                fVar13 = pGVar5->time - *(float *)((longlong)(pGVar5 + -1) + 0x10);
              }
              fVar13 = fVar13 * duration;
            }
            CStack_11._0_8_ = uVar9;
            CStack_11._8_8_ = uVar10;
            pTVar15 = DOTweenModuleUI_DOColor_1(target,&CStack_11,fVar13,(MethodInfo *)0x0);
            t = (Tween *)func_?(pTVar15);
            bVar16 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
                    TweenSettingsExtensions_ValidateAddToSequence(pSVar1,t,0,(MethodInfo *)0x0);
            if (bVar16 != 0) {
              if (pSVar1 == (Sequence *)0x0) goto code_?;
              DOTween.dll::DG::Tweening::Sequence::Sequence_DoInsert
                        (pSVar1,t,(pSVar1->fields)._.duration,(MethodInfo *)0x0);
            }
          }
          uVar6 = (ulonglong)(uVar7 + 1);
          uVar4 = uVar4 + 1;
          pGVar5 = pGVar5 + 1;
        } while ((longlong)uVar4 < (longlong)iVar3);
      }
      DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                ((Object *)pSVar1,(Object *)target,
                 DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
                );
      return pSVar1;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pSVar1 = (Sequence *)(*pcVar14)();
  return pSVar1;
}


/* Tweener DOHorizontalNormalizedPos(ScrollRect, Single, Single, Boolean) */

Tweener * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::
          DOTweenModuleUI_DOHorizontalNormalizedPos
                    (ScrollRect *target,float endValue,float duration,bool snapping,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass31_0___DOHorizontalNormalizedPos_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass31_0___DOHorizontalNormalizedPos_b__1_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass31_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass31_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (Tweener *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(ScrollRect **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>)
  ;
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass31_0___DOHorizontalNormalizedPos_b__0__
               );
  setter = (DOSetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>)
  ;
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass31_0___DOHorizontalNormalizedPos_b__1_float_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar9 = DOTween.dll::DG::Tweening::DOTween::DOTween_To
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar9 != (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_
                  *)0x0) && ((pTVar9->fields)._._._active_k__BackingField != 0)) {
    (pTVar9->fields).plugOptions.snapping = snapping;
  }
  pOVar10 = *(Object_1 **)(lVar1 + 0x10);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Component,pOVar10,
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar9 == (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_
                 *)0x0) {
    return (Tweener *)0x0;
  }
  if ((pTVar9->fields)._._._active_k__BackingField == 0) {
    return (Tweener *)pTVar9;
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->debugMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->useSafeMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->_fooDebugStoreTargetId == 0)
  goto code_?;
  this = (Object_1 *)0x0;
  if (pOVar10 != (Object_1 *)0x0) {
    bVar11 = (TypeInfo__UnityEngine__Component->_1).naturalAligment;
    if (((((Object__Class *)pOVar10->klass)->_1).naturalAligment < bVar11) ||
       (bVar4 = true,
       (((Object__Class *)pOVar10->klass)->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
       (Il2CppClass *)TypeInfo__UnityEngine__Component)) {
      bVar4 = false;
    }
    if (bVar4) {
      this = pOVar10;
    }
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Object_1 *)0x0) {
code_?:
    if (pOVar10 == (Object_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pTVar3 = (Tweener *)(*pcVar2)();
      return pTVar3;
    }
    pSVar12 = (String *)
             (*(((Object__Class *)pOVar10->klass)->vtable).ToString.methodPtr)
                       (pOVar10,(((Object__Class *)pOVar10->klass)->vtable).ToString.method);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this->fields).m_CachedPtr == (void *)0x0) goto code_?;
    pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       (this,(MethodInfo *)0x0);
  }
  (pTVar9->fields)._._.debugTargetId = pSVar12;
  func_?(&(pTVar9->fields)._._.debugTargetId);
code_?:
  bVar4 = iRam_? != 0;
  (pTVar9->fields)._._.target = (Object *)pOVar10;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pTVar9->fields)._._.target >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
  }
  return (Tweener *)pTVar9;
}


/* Sequence DOJumpAnchorPos(RectTransform, Vector2, Single, Int32, Single, Boolean) */

Sequence *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOJumpAnchorPos
          (RectTransform *target,Vector2 endValue,float jumpPower,int32_t numJumps,float duration,
          bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__TweenCallback);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__OnStart<DG::Tweening::Tweener>_DG__Tweening__Tweener__DG__Tweening__TweenCallback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__OnUpdate<DG::Tweening::Sequence>_DG__Tweening__Sequence__DG__Tweening__TweenCallback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetEase<DG::Tweening::Sequence>_DG__Tweening__Sequence__DG__Tweening__Ease_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetEase<DG::Tweening::Tweener>_DG__Tweening__Tweener__DG__Tweening__Ease_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetLoops<DG::Tweening::Tweener>_DG__Tweening__Tweener__int__DG__Tweening__LoopType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetRelative<DG::Tweening::Tweener>_DG__Tweening__Tweener_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__2__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__3__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__4_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__5__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0);
  if (object == (Object *)0x0) goto code_?;
  bVar1 = iRam_? != 0;
  object[1].klass = (Object__Class *)target;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  fStack_6 = endValue.x;
  fStack_7 = endValue.y;
  *(float *)&object[3].klass = fStack_6;
  *(float *)((longlong)&object[3].klass + 4) = fStack_7;
  *(undefined4 *)&object[2].klass = 0xbf800000;
  iVar8 = 1;
  if (0 < numJumps) {
    iVar8 = numJumps;
  }
  *(undefined4 *)&object[1].monitor = 0;
  *(undefined1 *)((longlong)&object[1].monitor + 4) = 0;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar9 = DOTween.dll::DG::Tweening::DOTween::DOTween_Sequence((MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  object[2].monitor = (MonitorData *)pSVar9;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&object[2].monitor >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pDVar10 = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(pDVar10,object,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__0__
               );
  pDVar11 = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(pDVar11,object,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__1_UnityEngine__Vector2_
               );
  t = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                (pDVar10,pDVar11,(Vector2)((ulonglong)(uint)jumpPower << 0x20),
                 duration / (float)(iVar8 * 2),(MethodInfo *)0x0);
  if (t == (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
            *)0x0) {
code_?:
    if (t != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)0x0) goto code_?;
code_?:
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar12,object,
               MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__2__
               ,(MethodInfo *)0x0);
    if (t != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)0x0) goto code_?;
  }
  else {
    if ((t->fields)._._._active_k__BackingField != 0) {
      (t->fields).plugOptions.axisConstraint = 4;
      (t->fields).plugOptions.snapping = snapping;
      (t->fields)._._.easeType = 6;
      bVar1 = iRam_? != 0;
      (t->fields)._._.customEase = (EaseFunction *)0x0;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(t->fields)._._.customEase >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
    }
    if (((((t->fields)._._._active_k__BackingField == 0) || ((t->fields)._._.creationLocked != 0))
        || ((t->fields)._._.isFrom != 0)) || ((t->fields)._._.isBlendable != 0))
    goto code_?;
    (t->fields)._._._isRelative_k__BackingField = 1;
code_?:
    uVar2 = iVar8 * 2;
    if (((t->fields)._._._active_k__BackingField == 0) || ((t->fields)._._.creationLocked != 0))
    goto code_?;
    if ((int)uVar2 < -1) {
      uVar2 = 0xffffffff;
    }
    else if (uVar2 == 0) {
      uVar2 = 1;
    }
    (t->fields)._._.loops = uVar2;
    (t->fields)._._.loopType = 1;
    if ((t->fields)._._._.tweenType == 0) {
      if (uVar2 < 0x80000000) {
        (t->fields)._._.fullDuration = (float)(int)uVar2 * (t->fields)._._.duration;
      }
      else {
        (t->fields)._._.fullDuration = INFINITY;
      }
    }
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar12,object,
               MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__2__
               ,(MethodInfo *)0x0);
code_?:
    if (((t->fields)._._._active_k__BackingField != 0) &&
       (bVar1 = iRam_? != 0, (t->fields)._._._.onStart = (TweenCallback *)pNVar12,
       bVar1)) {
      uVar2 = (uint)((ulonglong)&(t->fields)._._._.onStart >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  pSVar9 = (Sequence *)object[2].monitor;
  pDVar10 = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(pDVar10,object,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__3__
               );
  pDVar11 = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(pDVar11,object,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__4_UnityEngine__Vector2_
               );
  endValue_00.y = 0.0;
  endValue_00.x = (float)*(uint *)&object[3].klass;
  t_00 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                   (pDVar10,pDVar11,endValue_00,duration,(MethodInfo *)0x0);
  if ((t_00 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                *)0x0) && ((t_00->fields)._._._active_k__BackingField != 0)) {
    (t_00->fields).plugOptions.axisConstraint = 2;
    (t_00->fields).plugOptions.snapping = snapping;
    (t_00->fields)._._.easeType = 1;
    bVar1 = iRam_? != 0;
    (t_00->fields)._._.customEase = (EaseFunction *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(t_00->fields)._._.customEase >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  bVar13 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
          TweenSettingsExtensions_ValidateAddToSequence(pSVar9,(Tween *)t_00,0,(MethodInfo *)0x0);
  if (bVar13 != 0) {
    if (pSVar9 == (Sequence *)0x0) goto code_?;
    DOTween.dll::DG::Tweening::Sequence::Sequence_DoInsert
              (pSVar9,(Tween *)t_00,(pSVar9->fields)._.duration,(MethodInfo *)0x0);
  }
  bVar13 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
          TweenSettingsExtensions_ValidateAddToSequence(pSVar9,(Tween *)t,0,(MethodInfo *)0x0);
  if (bVar13 != 0) {
    if (pSVar9 == (Sequence *)0x0) {
code_?:
      FUN_?();
      pcVar14 = (code *)swi(3);
      pSVar9 = (Sequence *)(*pcVar14)();
      return pSVar9;
    }
    DOTween.dll::DG::Tweening::Sequence::Sequence_DoInsert
              (pSVar9,(Tween *)t,(pSVar9->fields).lastTweenInsertTime,(MethodInfo *)0x0);
  }
  pOVar15 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                      ((Object *)pSVar9,(Object *)object[1].klass,
                       DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
                      );
  iVar8 = TypeInfo__DG__Tweening__DOTween->static_fields->defaultEaseType;
  if ((pOVar15 != (Object *)0x0) && (*(char *)&pOVar15[0xe].monitor != '\0')) {
    *(int *)((longlong)&pOVar15[0xb].klass + 4) = iVar8;
    if (iVar8 - 0x20U < 4) {
      *(float *)&pOVar15[0xc].klass = (float)(int)*(float *)&pOVar15[0xc].klass;
    }
    bVar1 = iRam_? != 0;
    pOVar15[0xb].monitor = (MonitorData *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&pOVar15[0xb].monitor >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  pMVar16 = object[2].monitor;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,object,
             MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass29_0___DOJumpAnchorPos_b__5__
             ,(MethodInfo *)0x0);
  if (((pMVar16 != (MonitorData *)0x0) && (pMVar16[0xe8] != (MonitorData)0x0)) &&
     (bVar1 = iRam_? != 0, *(NavMesh_OnNavMeshPreUpdate **)(pMVar16 + 0x70) = pNVar12,
     bVar1)) {
    uVar2 = (uint)((ulonglong)(pMVar16 + 0x70) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return (Sequence *)object[2].monitor;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOMinSize(LayoutElement, Vector2, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOMinSize
          (LayoutElement *target,Vector2 endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass8_0___DOMinSize_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass8_0___DOMinSize_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass8_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(LayoutElement **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass8_0___DOMinSize_b__0__);
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass8_0___DOMinSize_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* Tweener DONormalizedPos(ScrollRect, Vector2, Single, Boolean) */

Tweener * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DONormalizedPos
                    (ScrollRect *target,Vector2 endValue,float duration,bool snapping,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass30_0___DONormalizedPos_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass30_0___DONormalizedPos_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass30_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass30_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (Tweener *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(ScrollRect **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass30_0___DONormalizedPos_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass30_0___DONormalizedPos_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar9 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar9 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar9->fields)._._._active_k__BackingField != 0)) {
    (pTVar9->fields).plugOptions.snapping = snapping;
  }
  pOVar10 = *(Object_1 **)(lVar1 + 0x10);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Component,pOVar10,
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar9 == (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                 *)0x0) {
    return (Tweener *)0x0;
  }
  if ((pTVar9->fields)._._._active_k__BackingField == 0) {
    return (Tweener *)pTVar9;
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->debugMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->useSafeMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->_fooDebugStoreTargetId == 0)
  goto code_?;
  this = (Object_1 *)0x0;
  if (pOVar10 != (Object_1 *)0x0) {
    bVar11 = (TypeInfo__UnityEngine__Component->_1).naturalAligment;
    if (((((Object__Class *)pOVar10->klass)->_1).naturalAligment < bVar11) ||
       (bVar4 = true,
       (((Object__Class *)pOVar10->klass)->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
       (Il2CppClass *)TypeInfo__UnityEngine__Component)) {
      bVar4 = false;
    }
    if (bVar4) {
      this = pOVar10;
    }
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Object_1 *)0x0) {
code_?:
    if (pOVar10 == (Object_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pTVar3 = (Tweener *)(*pcVar2)();
      return pTVar3;
    }
    pSVar12 = (String *)
             (*(((Object__Class *)pOVar10->klass)->vtable).ToString.methodPtr)
                       (pOVar10,(((Object__Class *)pOVar10->klass)->vtable).ToString.method);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this->fields).m_CachedPtr == (void *)0x0) goto code_?;
    pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       (this,(MethodInfo *)0x0);
  }
  (pTVar9->fields)._._.debugTargetId = pSVar12;
  func_?(&(pTVar9->fields)._._.debugTargetId);
code_?:
  bVar4 = iRam_? != 0;
  (pTVar9->fields)._._.target = (Object *)pOVar10;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pTVar9->fields)._._.target >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
  }
  return (Tweener *)pTVar9;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOPivot(RectTransform, Vector2, Single) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOPivot
          (RectTransform *target,Vector2 endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass22_0___DOPivot_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass22_0___DOPivot_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass22_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass22_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass22_0___DOPivot_b__0__);
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass22_0___DOPivot_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOPivotX(RectTransform, Single, Single) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOPivotX
          (RectTransform *target,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass23_0___DOPivotX_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass23_0___DOPivotX_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass23_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass23_0___DOPivotX_b__0__);
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass23_0___DOPivotX_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  endValue_00.y = 0.0;
  endValue_00.x = endValue;
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue_00,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.axisConstraint = 2;
    (pTVar3->fields).plugOptions.snapping = 0;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOPivotY(RectTransform, Single, Single) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOPivotY
          (RectTransform *target,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass24_0___DOPivotY_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass24_0___DOPivotY_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass24_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass24_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass24_0___DOPivotY_b__0__);
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass24_0___DOPivotY_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,(Vector2)((ulonglong)(uint)endValue << 0x20),duration,
                      (MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.axisConstraint = 4;
    (pTVar3->fields).plugOptions.snapping = 0;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOPreferredSize(LayoutElement, Vector2, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOPreferredSize
          (LayoutElement *target,Vector2 endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass9_0___DOPreferredSize_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass9_0___DOPreferredSize_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass9_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass9_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(LayoutElement **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass9_0___DOPreferredSize_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass9_0___DOPreferredSize_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* Tweener DOPunchAnchorPos(RectTransform, Vector2, Single, Int32, Single, Boolean) */

Tweener * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOPunchAnchorPos
                    (RectTransform *target,Vector2 punch,float duration,int32_t vibrato,
                    float elasticity,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass26_0___DOPunchAnchorPos_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass26_0___DOPunchAnchorPos_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass26_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass26_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (Tweener *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass26_0___DOPunchAnchorPos_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass26_0___DOPunchAnchorPos_b__1_UnityEngine__Vector3_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  fStack_9 = 0.0;
  VStack_10 = punch;
  t = DOTween.dll::DG::Tweening::DOTween::DOTween_Punch
                (getter,setter,(Vector3 *)&VStack_10,duration,vibrato,elasticity,(MethodInfo *)0x0);
  pTVar3 = (Tweener *)
           DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                     ((Object *)t,*(Object **)(lVar1 + 0x10),
                      DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>__System__Object_
                     );
  if ((pTVar3 != (Tweener *)0x0) && ((pTVar3->fields)._._active_k__BackingField != 0)) {
    pTVar3[1].fields._._.field_0xc = snapping;
  }
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOScale(Outline, Vector2, Single) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOScale
          (Outline *target,Vector2 endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass12_0___DOScale_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass12_0___DOScale_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass12_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Outline **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass12_0___DOScale_b__0__);
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass12_0___DOScale_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>__System__Object_
            );
  return pTVar3;
}


/* Tweener DOShakeAnchorPos(RectTransform, Single, Single, Int32, Single, Boolean, Boolean,
   ShakeRandomnessMode) */

Tweener * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOShakeAnchorPos
                    (RectTransform *target,float duration,float strength,int32_t vibrato,
                    float randomness,bool snapping,bool fadeOut,
                    ShakeRandomnessMode__Enum randomnessMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_MethodInfo__DG__Tweening__Core__Extensions__SetSpecialStartupMode<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>__DG__Tweening__Core__Enums__SpecialStartupMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass27_0___DOShakeAnchorPos_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass27_0___DOShakeAnchorPos_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass27_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass27_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(RectTransform **)(lVar1 + 0x10) = target;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    getter = (DOGetter_1_UnityEngine_Vector3_ *)
             FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    FUN_?(getter,lVar1,
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass27_0___DOShakeAnchorPos_b__0__
                 );
    setter = (DOSetter_1_UnityEngine_Vector3_ *)
             FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    FUN_?(setter,lVar1,
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass27_0___DOShakeAnchorPos_b__1_UnityEngine__Vector3_
                 );
    if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DG__Tweening__DOTween);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
      FUN_?();
    }
    aVStack_7[0].y = strength;
    aVStack_7[0].x = strength;
    aVStack_7[0].z = strength;
    t = DOTween.dll::DG::Tweening::DOTween::DOTween_Shake_2
                  (getter,setter,duration,aVStack_7,vibrato,randomness,1,0,fadeOut,randomnessMode,
                   (MethodInfo *)0x0);
    pTVar8 = (Tweener *)
             DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                       ((Object *)t,*(Object **)(lVar1 + 0x10),
                        DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>__System__Object_
                       );
    if (pTVar8 != (Tweener *)0x0) {
      (pTVar8->fields)._.specialStartupMode = 2;
      if ((pTVar8->fields)._._active_k__BackingField != 0) {
        pTVar8[1].fields._._.field_0xc = snapping;
      }
      return pTVar8;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pTVar8 = (Tweener *)(*pcVar9)();
  return pTVar8;
}


/* Tweener DOShakeAnchorPos(RectTransform, Single, Vector2, Int32, Single, Boolean, Boolean,
   ShakeRandomnessMode) */

Tweener * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOShakeAnchorPos_1
                    (RectTransform *target,float duration,Vector2 strength,int32_t vibrato,
                    float randomness,bool snapping,bool fadeOut,
                    ShakeRandomnessMode__Enum randomnessMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_MethodInfo__DG__Tweening__Core__Extensions__SetSpecialStartupMode<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>__DG__Tweening__Core__Enums__SpecialStartupMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass28_0___DOShakeAnchorPos_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass28_0___DOShakeAnchorPos_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass28_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass28_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(RectTransform **)(lVar1 + 0x10) = target;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    getter = (DOGetter_1_UnityEngine_Vector3_ *)
             FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    FUN_?(getter,lVar1,
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass28_0___DOShakeAnchorPos_b__0__
                 );
    setter = (DOSetter_1_UnityEngine_Vector3_ *)
             FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    FUN_?(setter,lVar1,
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass28_0___DOShakeAnchorPos_b__1_UnityEngine__Vector3_
                 );
    if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DG__Tweening__DOTween);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
      FUN_?();
    }
    fStack_7 = 0.0;
    VStack_8 = strength;
    t = DOTween.dll::DG::Tweening::DOTween::DOTween_Shake_2
                  (getter,setter,duration,(Vector3 *)&VStack_8,vibrato,randomness,0,1,fadeOut,
                   randomnessMode,(MethodInfo *)0x0);
    pTVar9 = (Tweener *)
             DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                       ((Object *)t,*(Object **)(lVar1 + 0x10),
                        DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_UnityEngine::Vector3_[],_DG::Tweening::Plugins::Options::Vector3ArrayOptions>__System__Object_
                       );
    if (pTVar9 != (Tweener *)0x0) {
      (pTVar9->fields)._.specialStartupMode = 2;
      if ((pTVar9->fields)._._active_k__BackingField != 0) {
        pTVar9[1].fields._._.field_0xc = snapping;
      }
      return pTVar9;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pTVar9 = (Tweener *)(*pcVar10)();
  return pTVar9;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions]
   DOShapeCircle(RectTransform, Vector2, Single, Single, Boolean, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_CircleOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOShapeCircle
          (RectTransform *target,Vector2 center,float endValueDegrees,float duration,
          bool relativeCenter,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>_MethodInfo__DG__Tweening__DOTween__To<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>_DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>__UnityEngine__Vector2__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass41_0___DOShapeCircle_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass41_0___DOShapeCircle_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass41_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass41_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_CircleOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>_MethodInfo__DG__Tweening__Plugins__Core__PluginsManager__GetCustomPlugin<DG::Tweening::Plugins::CirclePlugin,_UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plugin = DOTween.dll::DG::Tweening::Plugins::Core::PluginsManager::
           PluginsManager_GetCustomPlugin_1
                     (
                     DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>_MethodInfo__DG__Tweening__Plugins__Core__PluginsManager__GetCustomPlugin<DG::Tweening::Plugins::CirclePlugin,_UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>__
                     );
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass41_0___DOShapeCircle_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass41_0___DOShapeCircle_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>_MethodInfo__DG__Tweening__DOTween__To<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>_DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>__UnityEngine__Vector2__float_
  ;
  if ((
      DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>_MethodInfo__DG__Tweening__DOTween__To<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>_DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::CircleOptions>__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>__UnityEngine__Vector2__float_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = (pMVar9->field7_0x38).rgctx_data[4].method;
  if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  DOTween.dll::DG::Tweening::DOTween::DOTween_InitCheck((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_GetTweener_5
                     (((pMVar9->field7_0x38).rgctx_data)->method);
  bVar10 = DOTween.dll::DG::Tweening::Tweener::Tweener_Setup_5
                    (pTVar3,getter,setter,center,duration,
                     (ABSTweenPlugin_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_CircleOptions_
                      *)plugin,(pMVar9->field7_0x38).rgctx_data[6].method);
  if (bVar10 == 0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_Despawn
              ((Tween *)pTVar3,1,(MethodInfo *)0x0);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_CircleOptions_
              *)0x0;
  }
  else if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_CircleOptions_
                       *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.endValueDegrees = endValueDegrees;
    (pTVar3->fields).plugOptions.relativeCenter = relativeCenter;
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOSizeDelta(RectTransform, Vector2, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOSizeDelta
          (RectTransform *target,Vector2 endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass25_0___DOSizeDelta_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass25_0___DOSizeDelta_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass25_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass25_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(RectTransform **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass25_0___DOSizeDelta_b__0__
               );
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass25_0___DOSizeDelta_b__1_UnityEngine__Vector2_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[System.String,System.String,DG.Tweening.Plugins.Options.StringOptions] DOText(Text,
   String, Single, Boolean, ScrambleMode, String) */

TweenerCore_3_System_String_System_String_DG_Tweening_Plugins_Options_StringOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOText
          (Text *target,String *endValue,float duration,bool richTextEnabled,
          ScrambleMode__Enum scrambleMode,String *scrambleChars,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass37_0___DOText_b__0__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass37_0___DOText_b__1_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass37_0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_can_t_pass_a_NULL_string_to_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass37_0);
  if (object == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pTVar2 = (TweenerCore_3_System_String_System_String_DG_Tweening_Plugins_Options_StringOptions_ *
             )(*pcVar1)();
    return pTVar2;
  }
  bVar3 = iRam_? != 0;
  object[1].klass = (Object__Class *)target;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (endValue == (String *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DG__Tweening__Core__Debugger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    endValue = ::StringLiteral__;
    if (0 < TypeInfo__DG__Tweening__Core__Debugger->static_fields->_logPriority) {
      DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogWarning
                ((Object *)StringLiteral_You_can_t_pass_a_NULL_string_to_,(Tween *)0x0,
                 (MethodInfo *)0x0);
      endValue = ::StringLiteral__;
    }
  }
  getter = (DOGetter_1_System_Object_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<System::String>);
  pMVar8 = MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass37_0___DOText_b__0__;
  bVar3 = iRam_? != 0;
  (getter->fields)._._.method_ptr =
       MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass37_0___DOText_b__0__->
       virtualMethodPointer;
  (getter->fields)._._.method = pMVar8;
  (getter->fields)._._.m_target = object;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(getter->fields)._._.m_target >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  uVar9 = pMVar8->parameters_count;
  (getter->fields)._._.method_code = getter;
  if (((pMVar8->flags & 0x10) == 0) || (uVar9 != 0)) {
    (getter->fields)._._.method_code = (getter->fields)._._.m_target;
    puVar10 = (getter->fields)._._.method_ptr;
  }
  else {
    puVar10 = &UNK_?;
  }
  (getter->fields)._._.invoke_impl = puVar10;
  (getter->fields)._._.extra_arg = FUN_?;
  this = (UnityAction_1_System_Object_ *)
         FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this,object,
             MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass37_0___DOText_b__1_System__String_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<System::String,_System::String,_DG::Tweening::Plugins::Options::StringOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<System::String,_System::String,_DG::Tweening::Plugins::Options::StringOptions>_DG__Tweening__Core__DOGetter<System::String>__DG__Tweening__Core__DOSetter<System::String>__System__String__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<System::String,_System::String,_DG::Tweening::Plugins::Options::StringOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar8 = 
  DG__Tweening__Core__TweenerCore<System::String,_System::String,_DG::Tweening::Plugins::Options::StringOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<System::String,_System::String,_DG::Tweening::Plugins::Options::StringOptions>_DG__Tweening__Core__DOGetter<System::String>__DG__Tweening__Core__DOSetter<System::String>__System__String__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<System::String,_System::String,_DG::Tweening::Plugins::Options::StringOptions>_
  ;
  if ((
      DG__Tweening__Core__TweenerCore<System::String,_System::String,_DG::Tweening::Plugins::Options::StringOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<System::String,_System::String,_DG::Tweening::Plugins::Options::StringOptions>_DG__Tweening__Core__DOGetter<System::String>__DG__Tweening__Core__DOSetter<System::String>__System__String__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<System::String,_System::String,_DG::Tweening::Plugins::Options::StringOptions>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
    LOCK();
    UNLOCK();
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  DOTween.dll::DG::Tweening::DOTween::DOTween_InitCheck((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar2 = (TweenerCore_3_System_String_System_String_DG_Tweening_Plugins_Options_StringOptions_ *)
           DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_GetTweener_2
                     (((pMVar8->field7_0x38).rgctx_data)->method);
  bVar11 = DOTween.dll::DG::Tweening::Tweener::Tweener_Setup_2
                    ((TweenerCore_3_System_Object_System_Object_DG_Tweening_Plugins_Options_StringOptions_
                      *)pTVar2,getter,(DOSetter_1_System_Object_ *)this,(Object *)endValue,duration,
                     (ABSTweenPlugin_3_System_Object_System_Object_DG_Tweening_Plugins_Options_StringOptions_
                      *)0x0,(pMVar8->field7_0x38).rgctx_data[6].method);
  if (bVar11 == 0) {
    if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_Despawn
              ((Tween *)pTVar2,1,(MethodInfo *)0x0);
    pTVar2 = (TweenerCore_3_System_String_System_String_DG_Tweening_Plugins_Options_StringOptions_ *
             )0x0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Plugins__StringPluginExtensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pTVar2 != (TweenerCore_3_System_String_System_String_DG_Tweening_Plugins_Options_StringOptions_
                  *)0x0) && ((pTVar2->fields)._._._active_k__BackingField != 0)) {
    (pTVar2->fields).plugOptions.richTextEnabled = richTextEnabled;
    (pTVar2->fields).plugOptions.scrambleMode = scrambleMode;
    if ((scrambleChars != (String *)0x0) && ((scrambleChars->fields)._stringLength != 0)) {
      if (((scrambleChars->fields)._stringLength < 2) &&
         (scrambleChars =
               mscorlib.dll::System::String::String_Concat_4
                         (scrambleChars,scrambleChars,(MethodInfo *)0x0),
         scrambleChars == (String *)0x0)) goto code_?;
      pCVar12 = mscorlib.dll::System::String::String_ToCharArray(scrambleChars,(MethodInfo *)0x0);
      (pTVar2->fields).plugOptions.scrambledChars = pCVar12;
      func_?(&(pTVar2->fields).plugOptions.scrambledChars);
      pCVar12 = (pTVar2->fields).plugOptions.scrambledChars;
      if (*(int *)&(TypeInfo__DG__Tweening__Plugins__StringPluginExtensions->_1).field_0x1c == 0) {
        FUN_?();
      }
      DOTween.dll::DG::Tweening::Plugins::StringPluginExtensions::
      StringPluginExtensions_ScrambleChars(pCVar12,(MethodInfo *)0x0);
    }
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar2,(Object *)object[1].klass,
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar2;
}


/* TweenerCore`3[System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions]
   DOValue(Slider, Single, Single, Boolean) */

TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::DOTweenModuleUI_DOValue
          (Slider *target,float endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass33_0___DOValue_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass33_0___DOValue_b__1_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass33_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass33_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *)
             (*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Slider **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>)
  ;
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass33_0___DOValue_b__0__);
  setter = (DOSetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>)
  ;
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass33_0___DOValue_b__1_float_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* Tweener DOVerticalNormalizedPos(ScrollRect, Single, Single, Boolean) */

Tweener * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI::
          DOTweenModuleUI_DOVerticalNormalizedPos
                    (ScrollRect *target,float endValue,float duration,bool snapping,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass32_0___DOVerticalNormalizedPos_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass32_0___DOVerticalNormalizedPos_b__1_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass32_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass32_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (Tweener *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(ScrollRect **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>)
  ;
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass32_0___DOVerticalNormalizedPos_b__0__
               );
  setter = (DOSetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>)
  ;
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass32_0___DOVerticalNormalizedPos_b__1_float_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar9 = DOTween.dll::DG::Tweening::DOTween::DOTween_To
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar9 != (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_
                  *)0x0) && ((pTVar9->fields)._._._active_k__BackingField != 0)) {
    (pTVar9->fields).plugOptions.snapping = snapping;
  }
  pOVar10 = *(Object_1 **)(lVar1 + 0x10);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Component,pOVar10,
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar9 == (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_
                 *)0x0) {
    return (Tweener *)0x0;
  }
  if ((pTVar9->fields)._._._active_k__BackingField == 0) {
    return (Tweener *)pTVar9;
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->debugMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->useSafeMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->_fooDebugStoreTargetId == 0)
  goto code_?;
  this = (Object_1 *)0x0;
  if (pOVar10 != (Object_1 *)0x0) {
    bVar11 = (TypeInfo__UnityEngine__Component->_1).naturalAligment;
    if (((((Object__Class *)pOVar10->klass)->_1).naturalAligment < bVar11) ||
       (bVar4 = true,
       (((Object__Class *)pOVar10->klass)->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
       (Il2CppClass *)TypeInfo__UnityEngine__Component)) {
      bVar4 = false;
    }
    if (bVar4) {
      this = pOVar10;
    }
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Object_1 *)0x0) {
code_?:
    if (pOVar10 == (Object_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pTVar3 = (Tweener *)(*pcVar2)();
      return pTVar3;
    }
    pSVar12 = (String *)
             (*(((Object__Class *)pOVar10->klass)->vtable).ToString.methodPtr)
                       (pOVar10,(((Object__Class *)pOVar10->klass)->vtable).ToString.method);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this->fields).m_CachedPtr == (void *)0x0) goto code_?;
    pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       (this,(MethodInfo *)0x0);
  }
  (pTVar9->fields)._._.debugTargetId = pSVar12;
  func_?(&(pTVar9->fields)._._.debugTargetId);
code_?:
  bVar4 = iRam_? != 0;
  (pTVar9->fields)._._.target = (Object *)pOVar10;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pTVar9->fields)._._.target >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
  }
  return (Tweener *)pTVar9;
}

