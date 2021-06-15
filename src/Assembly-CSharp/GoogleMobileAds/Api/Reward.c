
/* Reward() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Reward::Reward__ctor
               (Reward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__EventArgs);
  }
  return;
}


/* Double get_Amount() */

double Assembly-CSharp.dll::GoogleMobileAds::Api::Reward::Reward_get_Amount
                 (Reward *this,MethodInfo *method)

{
  return (this->fields)._Amount_k__BackingField;
}


/* Void set_Amount(Double) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Reward::Reward_set_Amount
               (Reward *this,double value,MethodInfo *method)

{
  (this->fields)._Amount_k__BackingField = (double)CONCAT44(value._0_4_,in_stack_1);
  return;
}

