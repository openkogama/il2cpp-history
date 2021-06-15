
/* CustomTouristPromotionSettings(Int32, String, String, Boolean) */

void Assembly-CSharp.dll::CustomTouristPromotionSettings::CustomTouristPromotionSettings__ctor
               (CustomTouristPromotionSettings *this,int32_t frequency,String *url,String *asset,
               bool shouldRedirect,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._FrequencyPercent_k__BackingField = frequency;
  (this->fields)._URL_k__BackingField = url;
  (this->fields)._AssetURL_k__BackingField = asset;
  (this->fields)._Redirect_k__BackingField = shouldRedirect;
  return;
}

