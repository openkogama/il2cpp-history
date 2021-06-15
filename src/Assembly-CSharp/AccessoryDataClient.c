
/* AccessoryDataClient() */

void Assembly-CSharp.dll::AccessoryDataClient::AccessoryDataClient__ctor
               (AccessoryDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields)._.time = (AccessoryTimelimit *)this_00;
  return;
}

