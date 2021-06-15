
/* Link(Int32, Int32, Int32, Boolean) */

void MVWorldObject.dll::MV::WorldObject::Link::Link_1__ctor
               (Link_1 *this,int32_t id,int32_t outputWOID,int32_t inputWOID,bool isSet,
               MethodInfo *method)

{
  (this->fields).id = -1;
  (this->fields).outputWOID = -1;
  (this->fields).inputWOID = -1;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).id = id;
  (this->fields).outputWOID = outputWOID;
  (this->fields).inputWOID = inputWOID;
  (this->fields).isSet = isSet;
  return;
}


/* Link() */

void MVWorldObject.dll::MV::WorldObject::Link::Link_1__ctor_1(Link_1 *this,MethodInfo *method)

{
  (this->fields).id = -1;
  (this->fields).outputWOID = -1;
  (this->fields).inputWOID = -1;
  return;
}

