
/* Void OnEnable() */

void Assembly-CSharp.dll::DamageArrow::DamageArrow_OnEnable(DamageArrow *this,MethodInfo *method)

{
  this_00 = (this->fields).image;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* RectTransform get_RectTransform() */

RectTransform *
Assembly-CSharp.dll::DamageArrow::DamageArrow_get_RectTransform
          (DamageArrow *this,MethodInfo *method)

{
  this_00 = (this->fields).image;
  if (this_00 != (Image *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pMVar1 = (MVInteractableBase *)(this_00->fields)._._.m_RectTransform;
    if (pMVar1 == (MVInteractableBase *)0x0) {
      pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)this_00,
                          UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                         );
      (this_00->fields)._._.m_RectTransform = (RectTransform *)pMVar1;
    }
    return (RectTransform *)pMVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pRVar3 = (RectTransform *)(*pcVar2)();
  return pRVar3;
}


/* Void set_Sprite(Sprite) */

void Assembly-CSharp.dll::DamageArrow::DamageArrow_set_Sprite
               (DamageArrow *this,Sprite *value,MethodInfo *method)

{
  this_00 = (this->fields).image;
  if (this_00 != (Image *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    bVar1 = UnityEngine.UI.dll::UnityEngine::UI::SetPropertyUtility::SetPropertyUtility_SetClass_8
                      ((AnimationTriggers **)&(this_00->fields).m_Sprite,(AnimationTriggers *)value,
                       bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetClass<UnityEngine::Sprite>_UnityEngine__Sprite___UnityEngine__Sprite_
                      );
    if (bVar1 != 0) {
      (*(code *)(this_00->klass->vtable).SetAllDirty.method)(this_00);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(this_00,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

