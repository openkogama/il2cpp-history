
/* GamePassProgressionDataObjectShared() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectShared::GamePassProgressionDataObjectShared__ctor
               (GamePassProgressionDataObjectShared *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (GamePassProgressionDataObjectShared_XPTierRewards *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared__XPTierRewards
                           );
  GamePassProgressionDataObjectShared+XPTierRewards::
  GamePassProgressionDataObjectShared_XPTierRewards__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).xpTierRewards = this_00;
  return;
}


/* GamePassProgressionDataObjectShared(GamePassProgressionDataObjectShared+XPTierRewards) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectShared::GamePassProgressionDataObjectShared__ctor_1
               (GamePassProgressionDataObjectShared *this,
               GamePassProgressionDataObjectShared_XPTierRewards *xpTierRewards,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared__XPTierRewards
  ;
  this_00 = (GamePassProgressionDataObjectShared_XPTierRewards *)func_?();
  GamePassProgressionDataObjectShared+XPTierRewards::
  GamePassProgressionDataObjectShared_XPTierRewards__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).xpTierRewards = this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).xpTierRewards = xpTierRewards;
  return;
}

