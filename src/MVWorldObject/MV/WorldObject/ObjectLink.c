
/* ObjectLink(Int32, Int32, Int32, Boolean) */

void MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor
               (ObjectLink *this,int32_t id,int32_t objectConnectorWOID,int32_t objectWOID,
               bool isSet,MethodInfo *method)

{
  (this->fields).id = -1;
  (this->fields).objectConnectorWOID = -1;
  (this->fields).objectWOID = -1;
  (this->fields).isSet = 1;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).id = id;
  (this->fields).objectConnectorWOID = objectConnectorWOID;
  (this->fields).objectWOID = objectWOID;
  (this->fields).isSet = isSet;
  return;
}


/* ObjectLink() */

void MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1
               (ObjectLink *this,MethodInfo *method)

{
  (this->fields).id = -1;
  (this->fields).objectConnectorWOID = -1;
  (this->fields).objectWOID = -1;
  (this->fields).isSet = 1;
  return;
}

