
/* CustomTouristPromotionSettings(Int32, String, String, Boolean) */

void Assembly-CSharp.dll::CustomTouristPromotionSettings::CustomTouristPromotionSettings__ctor
               (CustomTouristPromotionSettings *this,int32_t frequency,String *url,String *asset,
               bool shouldRedirect,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppSVar1 = &(this->fields)._URL_k__BackingField;
  (this->fields)._FrequencyPercent_k__BackingField = frequency;
  *ppSVar1 = url;
  func_?(ppSVar1,url);
  ppSVar1 = &(this->fields)._AssetURL_k__BackingField;
  *ppSVar1 = asset;
  func_?(ppSVar1,asset);
  (this->fields)._Redirect_k__BackingField = shouldRedirect;
  return;
}

