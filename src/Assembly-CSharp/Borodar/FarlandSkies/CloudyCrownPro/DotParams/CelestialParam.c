
/* CelestialParam() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam::
     CelestialParam__ctor(CelestialParam *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields).TintColor.r = pCVar1->r;
  (this->fields).TintColor.g = fVar3;
  (this->fields).TintColor.b = fVar4;
  (this->fields).TintColor.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->r;
  fVar4 = pCVar1->g;
  fVar5 = pCVar1->b;
  fVar6 = pCVar1->a;
  (this->fields).LightIntencity = 1.0;
  (this->fields).LightColor.r = fVar3;
  (this->fields).LightColor.g = fVar4;
  (this->fields).LightColor.b = fVar5;
  (this->fields).LightColor.a = fVar6;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  return;
}

