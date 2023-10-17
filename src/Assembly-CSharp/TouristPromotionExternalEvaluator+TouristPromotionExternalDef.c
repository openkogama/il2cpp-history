
/* TouristPromotionExternalEvaluator+TouristPromotionExternalDef(TouristPromotion, Int32) */

void Assembly-CSharp.dll::TouristPromotionExternalEvaluator+TouristPromotionExternalDef::
     TouristPromotionExternalEvaluator_TouristPromotionExternalDef__ctor
               (TouristPromotionExternalEvaluator_TouristPromotionExternalDef *this,
               TouristPromotion *promotion,int32_t frequencyPercent,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._Promotion_k__BackingField = promotion;
  func_?(&this->fields,promotion);
  (this->fields)._FrequencyPercent_k__BackingField = frequencyPercent;
  return;
}

