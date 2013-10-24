void Float_ModVelocity (edict_t *ent, float x, float y, float z)
{
  vec3_t tempvec; //ljw2 What does tempvec actually do?
  
  VectorSet(tempvec, x, y, z);
  VectorAdd(ent->velocity, tempvec, ent->velocity);
}