
/* Vector2 <DOScale>b__0() */

Vector2 Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass12_0::
        DOTweenModuleUI_c_DisplayClass12_0__DOScale_b__0
                  (DOTweenModuleUI_c_DisplayClass12_0 *this,MethodInfo *method)

{
  pOVar1 = (this->fields).target;
  if (pOVar1 != (Outline *)0x0) {
    return (pOVar1->fields)._.m_EffectDistance;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Void <DOScale>b__1(Vector2) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass12_0::
     DOTweenModuleUI_c_DisplayClass12_0__DOScale_b__1
               (DOTweenModuleUI_c_DisplayClass12_0 *this,Vector2 x,MethodInfo *method)

{
  this_00 = (this->fields).target;
  if (this_00 == (Outline *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,x,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStackX_8 = x.x;
  fVar2 = _UNK_?;
  if (fStackX_8 <= _UNK_?) {
    fVar2 = fStackX_8;
  }
  fVar3 = _UNK_?;
  if (_UNK_? <= fVar2) {
    fVar3 = fVar2;
  }
  fStackX_c = x.y;
  fVar2 = _UNK_?;
  if (fStackX_c <= _UNK_?) {
    fVar2 = fStackX_c;
  }
  fVar4 = _UNK_?;
  if (_UNK_? <= fVar2) {
    fVar4 = fVar2;
  }
  fVar2 = (this_00->fields)._.m_EffectDistance.x - fVar3;
  fVar5 = (this_00->fields)._.m_EffectDistance.y - fVar4;
  if (_UNK_? <= fVar5 * fVar5 + fVar2 * fVar2) {
    (this_00->fields)._.m_EffectDistance.x = fVar3;
    (this_00->fields)._.m_EffectDistance.y = fVar4;
    pGVar6 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                       ((BaseMeshEffect *)this_00,(MethodInfo *)0x0);
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
    if (pGVar6 != (Graphic *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar6->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        pGVar6 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic
                           ((BaseMeshEffect *)this_00,(MethodInfo *)0x0);
        if (pGVar6 == (Graphic *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (*(pGVar6->klass->vtable).SetVerticesDirty.methodPtr)
                  (pGVar6,(pGVar6->klass->vtable).SetVerticesDirty.method);
      }
    }
  }
  return;
}

