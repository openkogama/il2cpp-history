
/* CustomTouristPromotionSettings(Int32, String, String, Boolean) */

void Assembly-CSharp.dll::CustomTouristPromotionSettings::CustomTouristPromotionSettings__ctor
               (CustomTouristPromotionSettings *this,int32_t frequency,String *url,String *asset,
               bool shouldRedirect,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._FrequencyPercent_k__BackingField = frequency;
  (this->fields)._URL_k__BackingField = url;
  func_?(&(this->fields)._URL_k__BackingField,url);
  (this->fields)._AssetURL_k__BackingField = asset;
  func_?(&(this->fields)._AssetURL_k__BackingField,asset);
  (this->fields)._Redirect_k__BackingField = shouldRedirect;
  return;
}

