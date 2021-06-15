
/* AccessoryBundleClient() */

void Assembly-CSharp.dll::AccessoryBundleClient::AccessoryBundleClient__ctor
               (AccessoryBundleClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.accessoryBundleID = -1;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__List__
            );
  (this->fields)._.accessoryBundleItems =
       (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)this_00;
  method_00 = TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  (this->fields)._.timelimit = (AccessoryTimelimit *)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}

