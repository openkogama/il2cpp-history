
/* ElitePromotionSettings(Boolean, Int32) */

void Assembly-CSharp.dll::ElitePromotionSettings::ElitePromotionSettings__ctor
               (ElitePromotionSettings *this,bool isEnabled,int32_t interval,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._ElitePromotionEnabled_k__BackingField = isEnabled;
  (this->fields)._ElitePromotionInterval_k__BackingField = interval;
  return;
}

