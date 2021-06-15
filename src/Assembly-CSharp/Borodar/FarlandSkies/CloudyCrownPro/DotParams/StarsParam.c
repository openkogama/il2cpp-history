
/* StarsParam() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam::
     StarsParam__ctor(StarsParam *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                     ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar2 = pCVar1->g;
  fVar3 = pCVar1->b;
  fVar4 = pCVar1->a;
  (this->fields).TintColor.r = pCVar1->r;
  (this->fields).TintColor.g = fVar2;
  (this->fields).TintColor.b = fVar3;
  (this->fields).TintColor.a = fVar4;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_5);
  return;
}

