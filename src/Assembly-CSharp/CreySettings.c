
/* CreySettings(Int32, String, Boolean) */

void Assembly-CSharp.dll::CreySettings::CreySettings__ctor
               (CreySettings *this,int32_t frequency,String *url,bool shouldRedirect,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppSVar1 = &(this->fields)._TouristPromotionCreyURL_k__BackingField;
  (this->fields)._TouristPromotionCreyFrequencyPercent_k__BackingField = frequency;
  *ppSVar1 = url;
  func_?(ppSVar1,url);
  (this->fields)._TouristPromotionCreyRedirect_k__BackingField = shouldRedirect;
  return;
}

