
/* SkyParam() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam::SkyParam__ctor
               (SkyParam *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields).TopColor.r = pCVar1->r;
  (this->fields).TopColor.g = fVar3;
  (this->fields).TopColor.b = fVar4;
  (this->fields).TopColor.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields).BottomColor.r = pCVar1->r;
  (this->fields).BottomColor.g = fVar3;
  (this->fields).BottomColor.b = fVar4;
  (this->fields).BottomColor.a = fVar5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  return;
}

